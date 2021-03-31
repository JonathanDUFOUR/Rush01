/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:59:26 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 12:57:47 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <sys/types.h>
# include <unistd.h>
# include <stdbool.h>

# define GRID_SIZE 4
# define ROTATES_SIZE 24

enum	e_ret_codes
{
	SUCCESS,
	WRONG_ARGC,
	WRONG_ARGV,
	NO_SOLVE
};

int		rush(char const *input);
int		solve(int res[GRID_SIZE][GRID_SIZE], char const *inputs);
int		err_msg(int err_code);
int		check_input(char const *s);
bool	is_res_valid(int res[GRID_SIZE][GRID_SIZE]);
bool	is_res_soluce(int res[GRID_SIZE][GRID_SIZE], char const *inputs);
void	init_res(int res[GRID_SIZE][GRID_SIZE]);
void	fill_res(int res[GRID_SIZE][GRID_SIZE], int current[GRID_SIZE], int j);
void	print_res(int res[GRID_SIZE][GRID_SIZE], char const *inputs);
void	ft_putchar(char c);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
size_t	ft_strlen(char const *s);

#endif
