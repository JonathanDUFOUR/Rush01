/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 21:42:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 12:42:13 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	rush(char const *inputs)
{
	int	res[GRID_SIZE][GRID_SIZE];
	int	ret;

	init_res(res);
	ret = solve(res, inputs);
	if (ret != SUCCESS)
		return (ret);
	print_res(res, inputs);
	return (SUCCESS);
}
