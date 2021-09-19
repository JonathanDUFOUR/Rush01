/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:59:26 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/19 18:01:32 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <stddef.h>
# include <stdbool.h>

int		r1_run(char const *input);
int		r1_solve(int **grid, char const *inputs);
int		r1_err_msg(int err_code);
int		r1_input_check(char const *s);

int		**r1_grid_allocate(void);

bool	r1_grid_is_valid(int **grid);
bool	r1_grid_is_soluce(int **grid, char const *inputs);

void	r1_grid_clear(int **grid);
void	r1_grid_fill(int **grid, int *current, int j);
void	r1_grid_init(int **grid);
void	r1_grid_print(int **grid, char const *inputs);
void	r1_putnbr(int n);

#endif
