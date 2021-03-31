/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:16:34 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 00:18:16 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	err_msg(int	err_code)
{
	if (err_code == WRONG_ARGC)
		ft_putendl("\e[31mError: Wrong argument count\e[0m");
	else if (err_code == WRONG_ARGV)
		ft_putendl("\e[31mError: Wrong input value\e[0m");
	else if (err_code == NO_SOLVE)
		ft_putendl("\e[31mError: No solution for this input\e[0m");
	else
		ft_putendl("\e[31mError: Unknown error code\e[0m");
	return (err_code);
}
