/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sscanf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:01:22 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/28 19:27:33 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	format_not_finished(const char *remaining_format, int j)
{
	int	i;

	i = j;
	while (remaining_format[i])
	{
		if (remaining_format[i] == '%'
			&& ft_strchr("csndiuxXo", remaining_format[i + 1]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_len_nb(char *start_n, char end_arg)
{
	int	i;

	i = 0;
	while (start_n[i] && start_n[i] != end_arg && ft_iswhitespace(start_n[i]))
		i++;
	if (start_n[i] && start_n[i] != end_arg
		&& (start_n[i] == '-' || start_n[i] == '+'))
		i++;
	while (start_n[i] && start_n[i] != end_arg
		&& start_n[i] >= '0' && start_n[i] <= '9')
		i++;
	return (i);
}
