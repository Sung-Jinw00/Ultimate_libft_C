/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:53:39 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/29 15:55:37 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @returns
 * The highest number between `a` and `b`.
*/
int	ft_max(int a, int b)
{
	if (a < b)
		return (b);
	return (a);
}
