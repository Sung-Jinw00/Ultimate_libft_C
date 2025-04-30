/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:25:29 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/30 17:43:14 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Find the highest number of an array of ints.
 * 
 * @returns
 * The highest number of an array of ints.*/
/**
 * - Else 404 if tab is NULL.
*/
int	ft_max_array(int *tab, int len_tab)
{
	int	i;
	int	max;

	if (!tab)
		return (404);
	max = tab[0];
	i = 0;
	while (++i < len_tab - 1)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}
