/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 21:28:01 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/19 17:37:14 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "enum/e_ret.h"

int	r1_input_check(char const *s)
{
	char const	*p = s;
	int			i;

	i = 0;
	while (*p)
	{
		if ((i % 2 && *p != ' ') || (!(i % 2) && (*p > '4' || *p < '1')))
			return (AV_ERR);
		++i;
		++p;
	}
	if ((p - s) != 31)
		return (AV_ERR);
	return (SUCCESS);
}
