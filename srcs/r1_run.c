/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r1_run.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 21:42:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/19 18:02:39 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush01.h"
#include "enum/e_ret.h"

int	r1_run(char const *inputs)
{
	int	**grid;
	int	ret;

	grid = r1_grid_allocate();
	if (!grid)
		return (MALLOC_ERR);
	r1_grid_init(grid);
	ret = r1_solve(grid, inputs);
	if (ret == SUCCESS)
		r1_grid_print(grid, inputs);
	r1_grid_clear(grid);
	return (ret);
}
