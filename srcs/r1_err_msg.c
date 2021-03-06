/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r1_err_msg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:16:34 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/12 08:56:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "colors.h"
#include "lookup_err_msg.h"

void	r1_err_msg(int const err)
{
	int	i;

	write(2, RED "Error:\n", 12);
	i = 0;
	while (g_err_msg[i].msg && err != g_err_msg[i].err)
		++i;
	if (g_err_msg[i].msg)
		write(2, g_err_msg[i].msg, g_err_msg[i].len);
	write(2, WHITE "\n", 5);
}
