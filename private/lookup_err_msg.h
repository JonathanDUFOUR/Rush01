/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lookup_err_msg.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:32:26 by jodufour          #+#    #+#             */
/*   Updated: 2022/02/12 08:56:31 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOOKUP_ERR_MSG_H
# define LOOKUP_ERR_MSG_H

# include <stddef.h>
# include "enum/e_ret.h"

typedef struct s_err_msg	t_err_msg;

struct s_err_msg
{
	int const		err;
	char const		*msg;
	size_t const	len;
};

static t_err_msg const		g_err_msg[] = {
{AC_ERR, "Wrong argument count", 20},
{AV_ERR, "Wrong argument value", 20},
{MALLOC_ERR, "malloc() failed", 15},
{NO_SOLVE, "No solution found", 17},
{0, NULL, 0}
};

#endif
