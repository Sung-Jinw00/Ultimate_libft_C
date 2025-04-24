/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsplit_getlens.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:31:37 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/23 22:41:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Split a string into a array of strings and take the lenghts of every string
 * in the new array of strings.
 * 
 * @param str the string that will be splited.
 * @param set the string that contains the arguments that will be used as
 * separators to split str.
 * @param int_arr the pointer on an array of strings that will receive the
 * lengths of every string in the array of strings returned.
 * @param len_arr the pointer on an int that will receive the lenght of
 * `int_arr`.
 * 
 * @return
 * The new array of strings.
*/
char	**ft_split_getlen(char *str, char *set, int **int_arr, int *len_arr)
{
	char	**arr;

	arr = ft_split(str, set);
	*int_arr = ft_getlen_strarr(arr, len_arr);
	return (arr);
}
