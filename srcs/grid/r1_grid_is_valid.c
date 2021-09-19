/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r1_res_is_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 23:54:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/19 17:59:29 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include "config.h"

static bool	col_is_valid(int **grid, int i)
{
	int	j;
	int	k;

	j = 0;
	while (j < GRID_SIZE)
	{
		k = 0;
		while (k < GRID_SIZE)
		{
			if (j != k && grid[j][i] == grid[k][i])
				return (false);
			++k;
		}
		++j;
	}
	return (true);
}

bool	r1_grid_is_valid(int **grid)
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		if (!col_is_valid(grid, i))
			return (false);
		++i;
	}
	return (true);
}
