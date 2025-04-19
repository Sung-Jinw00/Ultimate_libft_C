/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roffset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:13:33 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/15 21:00:47 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ultimate_libft.h"

/**
 * @return
 * An integer that skip all the last iterations of charset in str.
*/
int	ft_roffset(const char *str, char *charset)
{
	int	i;
	int	j;

	if (!str || !str[0])
		return (0);
	i = ft_strlen(str) - 1;
	while (i > 0)
	{
		j = -1;
		while (charset[++j])
		{
			if (str[i] == charset[j])
			{
				i--;
				break ;
			}
		}
		if (!charset[j])
			break ;
	}
	return (i);
}
