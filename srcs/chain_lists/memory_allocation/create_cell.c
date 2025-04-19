/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_cell.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:10:05 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/19 20:48:04 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Creates a new cell of a chain list.
 * 
 * @returns
 * - The new cell.
*/
t_cell	*create_cell(void *data)
{
	t_cell	*cell;

	cell = malloc(sizeof(t_cell));
	if (!cell)
		return (NULL);
	cell->data = data;
	cell->next = NULL;
	return (cell);
}
