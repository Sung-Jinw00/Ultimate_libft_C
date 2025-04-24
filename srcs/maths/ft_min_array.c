/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:25:29 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/24 15:51:59 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Find the lowest number of an array of ints.
 * 
 * @returns
 * The lowest number of an array of ints.*/
/**
 * - Else 404 if tab is NULL.
*/
int	ft_min_array(int *tab, int len_tab)
{
	int	i;
	int	min;

	if (!tab)
		return (404);
	min = tab[0];
	i = 0;
	while (tab[++i] && i < len_tab)
		if (tab[i] < min)
			min = tab[i];
	return (min);
}
