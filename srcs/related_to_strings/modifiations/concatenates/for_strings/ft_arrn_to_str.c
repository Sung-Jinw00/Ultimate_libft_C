/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:40:59 by marvin            #+#    #+#             */
/*   Updated: 2025/04/22 22:40:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ultimate_libft.h"

/**
 * @brief
 * join `n` strings of `arr` with a linker.
 * 
 * @param arr The array of string that will be concatenates.
 * @param linker The string that will make the link between 2 strings. */
/**
 * If `linker` is NULL or empty, no linkers will be applied, the strings
 * will be concatenates together as they were in `arr`.
 * @param n The numbers of strings that will be concatenates.
 * 
 * @return
 * - If `arr` is NULL, or if n < 1, The function returns NULL. */
/**
 * - Else : The function returns the linked string.
*/
char	*ft_arrn_to_str(char **arr, char *linker, int n)
{
	int		i;
	int		len_str;
	char	*str;

	if (!arr || !arr[0] || n < 1)
		return (NULL);
	len_str = 0;
	if (linker && linker[0])
	{
		if (n > ft_count_words(arr))
			n = ft_count_words(arr);
		len_str = ft_strlen(linker) * (n - 1);
	}
	while (arr[i] && i < n)
		len_str += ft_strlen(arr[i++]);
	str = ft_calloc(sizeof(char), len_str + 1);
	i = 0;
	while (arr[i] && i < n)
	{
		ft_strcat(str, arr[i++]);
		if (arr[i] && i < n)
			ft_strcat(str, linker);
	}
	return (str);
}
