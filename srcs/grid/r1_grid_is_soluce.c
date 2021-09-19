/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r1_res_is_soluce.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 00:32:41 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/19 17:58:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "config.h"

static bool	check_col(int **grid, int i, char const *inputs)
{
	int	last_seen;
	int	count;
	int	j;

	last_seen = 0;
	count = 0;
	j = -1;
	while (++j < GRID_SIZE)
	{
		if (grid[j][i] > last_seen)
		{	
			++count;
			last_seen = grid[j][i];
		}
	}
	return (count == (inputs[2 * i] - '0'));
}

static bool	check_col_rev(int **grid, int i, char const *inputs)
{
	int	last_seen;
	int	count;
	int	j;

	last_seen = 0;
	count = 0;
	j = GRID_SIZE;
	while (--j >= 0)
	{
		if (grid[j][i] > last_seen)
		{	
			++count;
			last_seen = grid[j][i];
		}
	}
	return (count == (inputs[8 + 2 * i] - '0'));
}

static bool	check_line(int **grid, int i, char const *inputs)
{
	int	last_seen;
	int	count;
	int	j;

	last_seen = 0;
	count = 0;
	j = -1;
	while (++j < GRID_SIZE)
	{
		if (grid[i][j] > last_seen)
		{	
			++count;
			last_seen = grid[i][j];
		}
	}
	return (count == (inputs[16 + 2 * i] - '0'));
}

static bool	check_line_rev(int **grid, int i, char const *inputs)
{
	int	last_seen;
	int	count;
	int	j;

	last_seen = 0;
	count = 0;
	j = GRID_SIZE;
	while (--j >= 0)
	{
		if (grid[i][j] > last_seen)
		{	
			++count;
			last_seen = grid[i][j];
		}
	}
	return (count == (inputs[24 + 2 * i] - '0'));
}

bool	r1_grid_is_soluce(int **grid, char const *inputs)
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		if (!check_col(grid, i, inputs)
			|| !check_col_rev(grid, i, inputs)
			|| !check_line(grid, i, inputs)
			|| !check_line_rev(grid, i, inputs))
			return (false);
		++i;
	}
	return (true);
}
