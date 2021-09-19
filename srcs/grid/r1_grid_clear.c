/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r1_res_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 17:01:18 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/19 17:56:47 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "config.h"

void	r1_grid_clear(int **grid)
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
		free(grid[i++]);
	free(grid);
}
