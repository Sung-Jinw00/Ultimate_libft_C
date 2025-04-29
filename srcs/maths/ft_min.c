/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:53:39 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/29 15:55:11 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @returns
 * The lowest number between `a` and `b`.
*/
int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}
