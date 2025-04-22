/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:33:07 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/15 19:04:46 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Determine if `s` only contains the characters in `formated` string.
 *  
 * @param s The string that will be scanned.
 * @param charset The characters to find in s.
 * 
 * @returns
 * - 1 if `s` is formatted with the characters in `format` only.*/
/**
 * - Else, if not, of if `format` or `s` are NULL, it will returns 0.
*/
int	ft_str_isformat(const char *s, char *format)
{
	int	i;
	int	j;

	if (!s || !format)
		return (0);
	i = -1;
	j = -1;
	while (s[++j])
	{
		while (format[++i])
		{
			if (s[j] == format[i])
				break ;
		}
		if (!format[i])
			return (0);
		i = -1;
	}
	return (1);
}
