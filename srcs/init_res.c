/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_res.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 22:48:44 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 00:22:41 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	init_res(int res[GRID_SIZE][GRID_SIZE])
{
	int	i;
	int	j;

	i = -1;
	while (++i < GRID_SIZE)
	{
		j = -1;
		while (++j < GRID_SIZE)
			res[i][j] = 0;
	}
}
