/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:10:05 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/19 20:48:04 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @return
 * The len of the chain list.
*/
long	len_list(t_list *L)
{
	long	len;

	len = 0;
	while (L)
	{
		L = L->next;
		len++;
	}
	return (len);
}
