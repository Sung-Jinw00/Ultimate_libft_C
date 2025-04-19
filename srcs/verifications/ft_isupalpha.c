/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:32:49 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/19 20:48:04 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @return
 * True if the argument is an alphabetic uppercase argument.
*/
bool	ft_isupalpha(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha(97));
	return(0);
} */