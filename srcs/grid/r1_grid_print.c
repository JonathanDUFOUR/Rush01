/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r1_res_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 22:46:42 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/19 17:59:50 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"
#include "colors.h"
#include "config.h"

static void	print_col_up(char const *inputs)
{
	write(1, "  " YELLOW, 7);
	write(1, inputs, 7);
	write(1, WHITE "\n", 5);
}

static void	print_col_down(char const *inputs)
{
	write(1, "  " YELLOW, 7);
	write(1, inputs + 8, 7);
	write(1, WHITE "\n", 5);
}

static void	print_row_left(char const *inputs, int const i)
{
	write(1, YELLOW, 5);
	write(1, inputs + 16 + i * 2, 1);
	write(1, WHITE " ", 5);
}

static void	print_row_right(char const *inputs, int const i)
{
	write(1, YELLOW, 5);
	write(1, inputs + 24 + i * 2, 1);
	write(1, WHITE, 5);
}

void	r1_grid_print(int **grid, char const *inputs)
{
	int	i;
	int	j;

	print_col_up(inputs);
	i = 0;
	while (i < GRID_SIZE)
	{
		print_row_left(inputs, i);
		j = 0;
		while (j < GRID_SIZE)
		{
			r1_putnbr(grid[i][j]);
			write(1, " ", 1);
			++j;
		}
		print_row_right(inputs, i);
		write(1, "\n", 1);
		++i;
	}
	print_col_down(inputs);
}
