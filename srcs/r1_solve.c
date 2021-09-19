/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r1_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 23:01:25 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/19 18:04:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include "rotates_array.h"
#include "enum/e_ret.h"

static void	init_current(int *current)
{
	int	j;

	j = 0;
	while (j < GRID_SIZE)
	{
		current[j] = 0;
		++j;
	}
}

static int	try_next_rotate(int *current)
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		if (current[i] == ROTATES_SIZE - 1)
			current[i] = 0;
		else
		{
			++current[i];
			return (SUCCESS);
		}
		++i;
	}
	return (NO_SOLVE);
}

int	r1_solve(int **grid, char const *inputs)
{
	bool	keep_searching;
	int		current[GRID_SIZE];
	int		j;

	keep_searching = true;
	init_current(current);
	while (keep_searching)
	{
		j = -1;
		while (++j < GRID_SIZE)
			r1_grid_fill(grid, current, j);
		if (r1_grid_is_valid(grid))
		{
			if (r1_grid_is_soluce(grid, inputs))
				keep_searching = false;
			else
				if (try_next_rotate(current) == NO_SOLVE)
					return (NO_SOLVE);
		}
		else
			if (try_next_rotate(current) == NO_SOLVE)
				return (NO_SOLVE);
	}
	return (SUCCESS);
}
