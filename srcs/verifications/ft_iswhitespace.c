/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:32:58 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/29 00:52:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @return
 * True if the argument is an white space.
*/
bool	ft_iswhitespace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isdigit(47));
	return(0);
} */