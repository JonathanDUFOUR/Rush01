/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_res.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 23:18:17 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 14:40:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include "rotates.h"

void	fill_res(int res[GRID_SIZE][GRID_SIZE], int current[GRID_SIZE], int j)
{
	int	k;

	k = -1;
	while (++k < GRID_SIZE)
	{
		res[j][k] = g_rotates[current[j]][k];
	}
}
