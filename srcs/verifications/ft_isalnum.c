/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:32:44 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/19 20:48:04 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @return
 * True if the argument is an alphanumeric argument.
*/
bool	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isnum(c));
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum(99));
	return(0);
} */