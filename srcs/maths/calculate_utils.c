/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:58:38 by marvin            #+#    #+#             */
/*   Updated: 2025/04/29 01:05:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_calculate	*create_node_calculate(double nb, int op)
{
	t_calculate	*node;

	node = malloc(sizeof(t_calculate));
	node->nb = nb;
	node->operator = op;
	node->next = NULL;
	return (node);
}

t_calculate	*add_at_calculate(t_calculate *list, double data, char op, int pos)
{
	int			i;
	t_calculate	*cur;
	t_calculate	*prev;
	t_calculate	*new_node;

	new_node = create_node_calculate(data, op);
	prev = list;
	if (!list)
		return (new_node);
	if (pos == 0)
	{
		new_node->next = list;
		return (new_node);
	}
	cur = prev->next;
	i = -1;
	while (++i < pos - 1)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = new_node;
	new_node->next = cur;
	return (list);
}

void	free_list_calculate(t_calculate *list)
{
	t_calculate	*tmp;

	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
}
