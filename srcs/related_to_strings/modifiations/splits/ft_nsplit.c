/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:31:37 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/23 16:30:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skip_charset(char i, char *charset)
{
	int	j;

	if (!charset)
		return (0);
	j = 0;
	while (charset[j])
	{
		if (i == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int	ft_cnt_words(char *str, char *charset)
{
	int	i;
	int	trigger;
	int	count;

	trigger = 0;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (!skip_charset(str[i], charset) && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		if (skip_charset(str[i], charset) && trigger == 1)
			trigger = 0;
		i++;
	}
	return (count);
}

int	len_word(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !skip_charset(str[i], charset))
		i++;
	return (i);
}

char	**write_split(char *str, char **split, char *charset, int n)
{
	int	i;
	int	j;
	int	len_wrd;

	i = 0;
	j = 0;
	len_wrd = 0;
	while (skip_charset(str[i], charset))
		i++;
	while (str && j < n && i < (int)ft_strlen(str))
	{
		len_wrd = len_word(str + i, charset);
		if (len_wrd != 0 && !skip_charset(str[i], charset))
		{
			split[j] = ft_strndup(str + i, len_wrd);
			if (!split[j])
				return (free_array(&split), NULL);
			j++;
			i += len_wrd;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}

/**
 * @brief
 * Split a string into an array of n strings.
 * 
 * @param str the string that will be splited.
 * @param charset the string that contains the arguments that will be used as
 * separators to split `str`.
 * @param n the amount of strings that will be splitted.*/
/**
 * - if `n` is superior to the maximum amount of strings to split, n will be
 * lowered to the max amount.*/
/**
 * - if `n` inferior to 1, the function will return NULL.
 * 
 * 
 * @return
 * The new array of `n` strings.
 * 
 * @note
 * - The free of `str` and `charset` is the responsibility of the user.*/
/**
 * - The function will stop splitting when it reaches `n` strings. It will not
 * return the whole string splitted n times, unless `n` = max amount of
 * splitted strings or above.
*/
char	**ft_nsplit(char *str, char *charset, int n)
{
	char	**split;
	int		max_split;

	if (!str || n < 1)
		return (NULL);
	max_split = ft_cnt_words(str, charset);
	if (n > max_split)
		n = max_split;
	split = (char **)malloc(sizeof(char *) * (n + 1));
	if (!split)
		return (NULL);
	return (write_split(str, split, charset, n));
}
