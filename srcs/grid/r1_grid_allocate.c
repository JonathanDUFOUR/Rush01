/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r1_res_allocate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 16:28:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/19 17:56:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "config.h"

int	**r1_grid_allocate(void)
{
	int	**grid;
	int	i;

	grid = malloc(GRID_SIZE * sizeof(int *));
	if (!grid)
		return (NULL);
	i = 0;
	while (i < GRID_SIZE)
	{
		grid[i] = malloc(GRID_SIZE * sizeof(int));
		if (!grid[i])
		{
			while (i)
				free(grid[i--]);
			free(grid[i]);
			return (NULL);
		}
		++i;
	}
	return (grid);
}
