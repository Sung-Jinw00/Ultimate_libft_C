/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_arrint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 14:46:21 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/15 19:04:46 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Collect all the lenghts of every string of an array of strings.
 * 
 * @param arr The array of stings that will be used to get the lenghts.
 * @param len_arrint The pointer on an int that will receive the len of the
 * array of ints.
 * 
 * @return
 * - If `arr` or `arr[0]` is NULL, the function will return NULL. */
/**
 * - Else, it returns an array that contains the lenght of every strings of
 * `arr`.
*/
int	*ft_getlen_strarr(char **arr, int *len_arrint)
{
	int	i;
	int	*str_int;

	if (!arr || !arr[0])
		return (NULL);
	if (len_arrint)
		*len_arrint = ft_count_words(arr);
	str_int = malloc(sizeof(int) * (*len_arrint));
	i = 0;
	while (arr[i])
	{
		str_int[i] = (int)ft_strlen(arr[i]);
		i++;
	}
	return (str_int);
}
