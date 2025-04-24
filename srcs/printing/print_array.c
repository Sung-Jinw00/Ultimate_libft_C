/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 18:51:34 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/24 17:04:15 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Print all the stings of an array of strings. 
*/
void	print_array(char **tab)
{
	int	i;

	i = 0;
	while (tab && tab[i])
		printf("%s\n", tab[i++]);
	printf("\n");
}
