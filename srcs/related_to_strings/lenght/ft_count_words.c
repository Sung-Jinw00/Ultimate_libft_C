/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:33:59 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/19 20:48:04 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @return
 * The number of strings in an array of strings, doesn't work for strings
 * alone.
 * 
 * @note
 * The array should be NULL terminated.
*/
int	ft_count_words(void *arg)
{
	int		i;
	char	**split;

	i = 0;
	if (!arg)
		return (0);
	split = (char **)arg;
	while (split[i])
		i++;
	return (i);
}
