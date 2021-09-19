/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r1_res_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 23:18:17 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/19 17:56:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include "rotates_array.h"

void	r1_grid_fill(int **grid, int *current, int j)
{
	int	k;

	k = 0;
	while (k < GRID_SIZE)
	{
		grid[j][k] = g_rotates[current[j]][k];
		++k;
	}
}
