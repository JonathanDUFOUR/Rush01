/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 23:01:25 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 01:32:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	init_current(int current[GRID_SIZE])
{
	int	j;

	j = -1;
	while (++j < GRID_SIZE)
		current[j] = 0;
}

int	try_next_rotate(int current[GRID_SIZE])
{
	int	i;

	i = -1;
	while (++i < GRID_SIZE)
	{
		if (current[i] == ROTATES_SIZE - 1)
			current[i] = 0;
		else
		{
			++current[i];
			return (SUCCESS);
		}
	}
	return (NO_SOLVE);
}

int	solve(int res[GRID_SIZE][GRID_SIZE], char const *inputs)
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
			fill_res(res, current, j);
		if (is_res_valid(res))
		{
			if (is_res_soluce(res, inputs))
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
