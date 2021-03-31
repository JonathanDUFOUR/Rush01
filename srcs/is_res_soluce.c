/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_res_soluce.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 00:32:41 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 01:13:55 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

bool	check_col(int res[GRID_SIZE][GRID_SIZE], int i, char const *inputs)
{
	int	last_seen;
	int	count;
	int	j;

	last_seen = 0;
	count = 0;
	j = -1;
	while (++j < GRID_SIZE)
	{
		if (res[j][i] > last_seen)
		{	
			++count;
			last_seen = res[j][i];
		}
	}
	return (count == (inputs[2 * i] - '0'));
}

bool	check_col_rev(int res[GRID_SIZE][GRID_SIZE], int i, char const *inputs)
{
	int	last_seen;
	int	count;
	int	j;

	last_seen = 0;
	count = 0;
	j = GRID_SIZE;
	while (--j >= 0)
	{
		if (res[j][i] > last_seen)
		{	
			++count;
			last_seen = res[j][i];
		}
	}
	return (count == (inputs[8 + 2 * i] - '0'));
}

bool	check_line(int res[GRID_SIZE][GRID_SIZE], int i, char const *inputs)
{
	int	last_seen;
	int	count;
	int	j;

	last_seen = 0;
	count = 0;
	j = -1;
	while (++j < GRID_SIZE)
	{
		if (res[i][j] > last_seen)
		{	
			++count;
			last_seen = res[i][j];
		}
	}
	return (count == (inputs[16 + 2 * i] - '0'));
}

bool	check_line_rev(int res[GRID_SIZE][GRID_SIZE], int i, char const *inputs)
{
	int	last_seen;
	int	count;
	int	j;

	last_seen = 0;
	count = 0;
	j = GRID_SIZE;
	while (--j >= 0)
	{
		if (res[i][j] > last_seen)
		{	
			++count;
			last_seen = res[i][j];
		}
	}
	return (count == (inputs[24 + 2 * i] - '0'));
}

bool	is_res_soluce(int res[GRID_SIZE][GRID_SIZE], char const *inputs)
{
	int	i;

	i = -1;
	while (++i < GRID_SIZE)
	{
		if (!check_col(res, i, inputs)
			|| !check_col_rev(res, i, inputs)
			|| !check_line(res, i, inputs)
			|| !check_line_rev(res, i, inputs))
			return (false);
	}
	return (true);
}
