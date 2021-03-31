/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_res_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 23:54:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 00:17:29 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static bool	is_col_valid(int res[GRID_SIZE][GRID_SIZE], int i)
{
	int	j;
	int	k;

	j = -1;
	while (++j < GRID_SIZE)
	{
		k = -1;
		while (++k < GRID_SIZE)
			if (j != k && res[j][i] == res[k][i])
				return (false);
	}
	return (true);
}

bool	is_res_valid(int res[GRID_SIZE][GRID_SIZE])
{
	int	i;

	i = -1;
	while (++i < GRID_SIZE)
	{
		if (!is_col_valid(res, i))
			return (false);
	}
	return (true);
}
