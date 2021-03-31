/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_res.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 22:46:42 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 21:04:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static void	print_col_up(char const *inputs)
{
	ft_putstr("\e[33m  ");
	write(1, inputs, 7);
	ft_putendl("\e[0m");
}

static void	print_col_down(char const *inputs)
{
	ft_putstr("\e[33m  ");
	write(1, inputs + 8, 7);
	ft_putendl("\e[0m");
}

static void	print_row_left(char const *inputs, int i)
{
	ft_putstr("\e[33m");
	ft_putchar(inputs[16 + i * 2]);
	ft_putchar(' ');
	ft_putstr("\e[0m");
}

static void	print_row_right(char const *inputs, int i)
{
	ft_putstr("\e[33m");
	ft_putchar(inputs[24 + i * 2]);
	ft_putstr("\e[0m");
}

void		print_res(int res[GRID_SIZE][GRID_SIZE], char const *inputs)
{
	int	i;
	int	j;

	i = -1;
	print_col_up(inputs);
	while (++i < GRID_SIZE)
	{
		print_row_left(inputs, i);
		j = -1;
		while (++j < GRID_SIZE)
		{
			ft_putnbr(res[i][j]);
			ft_putchar(' ');
		}
		print_row_right(inputs, i);
		ft_putchar('\n');
	}
	print_col_down(inputs);
}
