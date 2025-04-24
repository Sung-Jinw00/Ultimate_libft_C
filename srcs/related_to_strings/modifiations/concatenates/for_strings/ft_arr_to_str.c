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

#include "libft.h"

/**
 * @brief
 * join the string in `arr` with a linker.
 * 
 * @param arr The array of string that will be concatenates.
 * @param linker The string that will make the link between 2 strings. */
/**
 * If `linker` is NULL or empty, no linkers will be applied, the strings
 * will be concatenates together as they were in `arr`.
 * 
 * @return
 * - If `arr` is NULL, The function returns NULL. */
/**
 * - Else : The function returns the linked string.
*/
char	*ft_arr_to_str(char **arr, char *linker)
{
	int		i;
	int		len_str;
	char	*str;

	if (!arr || !arr[0])
		return (NULL);
	len_str = 0;
	if (linker && linker[0])
		len_str = ft_strlen(linker) * (ft_count_words(arr) - 1);
	i = 0;
	while (arr[i])
		len_str += ft_strlen(arr[i++]);
	str = ft_calloc(sizeof(char), len_str + 1);
	i = 0;
	while (arr[i])
	{
		ft_strcat(str, arr[i++]);
		if (arr[i])
			ft_strcat(str, linker);
	}
	return (str);
}
