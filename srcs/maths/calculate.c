/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:58:38 by marvin            #+#    #+#             */
/*   Updated: 2025/05/28 23:26:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		calculate(const char *expr);
void		free_list_calculate(t_calculate *list);
t_calculate	*add_at_calculate(t_calculate *list, double data, char op, int pos);

static double	if_parenthesis(const char **expr, int sign, int skip,
	int par_lvl)
{
	double	nb;
	char	*parenthesis;

	if (**expr == '-')
	{
		sign = -1;
		(*expr)++;
	}
	parenthesis = ft_strdup(*expr + 1);
	while (!(par_lvl == 1 && (*expr)[skip] == ')'))
	{
		if ((*expr)[skip] == ')')
			par_lvl--;
		else if ((*expr)[skip] == '(')
			par_lvl++;
		skip++;
	}
	parenthesis[skip - 1] = 0;
	nb = calculate(parenthesis) * sign;
	free(parenthesis);
	*expr += skip + 1;
	return (nb);
}

static double	if_no_parenthesis(const char **expr)
{
	double	nb;

	nb = ft_atod((char *)(*expr));
	while (**expr && ft_iswhitespace(**expr))
		(*expr)++;
	if (**expr && (**expr == '-' || **expr == '+'))
		(*expr)++;
	while (**expr && (ft_isnum(**expr) || **expr == '.' || **expr == ','))
		(*expr)++;
	return (nb);
}

static t_calculate	*create_list(const char *expr)
{
	int			i;
	double		nb;
	t_calculate	*calc_list;

	i = 0;
	calc_list = NULL;
	while (*expr)
	{
		while (*expr && ft_iswhitespace(*expr))
			expr++;
		if (*expr == '(' || (*expr == '-' && *(expr + 1) == '('))
			nb = if_parenthesis(&expr, 1, 0, 0);
		else
			nb = if_no_parenthesis(&expr);
		while (*expr && ft_iswhitespace(*expr))
			expr++;
		if (*expr && ft_strchr("+-*/", *expr))
			calc_list = add_at_calculate(calc_list, nb, *expr, i++);
		else
			calc_list = add_at_calculate(calc_list, nb, 0, i++);
		if (*expr)
			expr++;
	}
	return (calc_list);
}

static t_calculate	*do_mul_div(t_calculate *calc_list)
{
	t_calculate	*save;
	t_calculate	*next;

	save = calc_list;
	while (calc_list && calc_list->next)
	{
		while (calc_list && (calc_list->operator == '*'
				|| calc_list->operator == '/'))
		{
			if (calc_list->operator == '*')
				calc_list->nb *= calc_list->next->nb;
			else
				calc_list->nb /= calc_list->next->nb;
			calc_list->operator = calc_list->next->operator;
			next = calc_list->next->next;
			free(calc_list->next);
			calc_list->next = next;
		}
		calc_list = calc_list->next;
	}
	return (save);
}

/**
 * @brief Calculate an arithmetic expression with parenthesis.
 * 
 * 1)The function support the following operators :*/
/**
 * - Addition '+'*/
/**
 * - Subtraction '-'*/
/**
 * - Multiplication '*'*/
/**
 * - Division '/' (as floating point division)
 * 
 * 2)The function supports parenthesis levels, ex : (2 / (2 + 3.33) * 4) - -6
 * 
 * 3)The function does not support multiple operators or minus sign separated
 * by a white space such as :*/
/**
 * - 1 - - 1    // Invalid*/
/**
 * - 1- * 1     // Invalid*/
/**
 * - 6 / - (4)  // Invalid*/
/**
 * - 6 + -(- 4) // Invalid*/
/**
 * @return The result in a double, or zero if `expr` is NULL or empty.
*/
double	calculate(const char *expr)
{
	t_calculate	*tmp;
	double		answer;
	t_calculate	*calc_list;

	if (!expr || !*expr)
		return (0);
	answer = 0;
	calc_list = do_mul_div(create_list(expr));
	answer = calc_list->nb;
	tmp = calc_list;
	while (tmp && tmp->next)
	{
		if (tmp->operator == '+')
			answer += tmp->next->nb;
		else
			answer -= tmp->next->nb;
		tmp = tmp->next;
	}
	free_list_calculate(calc_list);
	return (answer);
}

/* #include <stdio.h>

int main(void)
{
	const char *exprs[] = {
		"12*-1",
		"1+1",
		"1 - 1",
		"1* 1",
		"1 /1",
		"-123",
		"123",
		"2 /2+3 * 4.75- -6",
		"12* 123",
		"2 / -(-2 - 3) * 4.33 - -6",
		0x0
	};
	double results[] = {-12., 2., 0., 1., 1., -123., 123., 21.25, 1476., 7.732};

	for (int i = 0; exprs[i]; i++)
	{
		double answer = calculate(exprs[i]);
		printf("Test %d :\n", i);
		if (answer == results[i])
			printf("no diff, congrats !\n");
		else
			printf("diff ! calculate (%s) should be %.18g, got %.18g\n",
						exprs[i], results[i], answer);
		printf("\n");
	}
}
 */