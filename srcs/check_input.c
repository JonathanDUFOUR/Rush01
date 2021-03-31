/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 21:28:01 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 00:22:58 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_input(char const *s)
{
	char const	*p;
	int			i;

	p = s;
	i = 0;
	while (*p)
	{
		if ((i % 2 && *p != ' ') || (!(i % 2) && (*p > '4' || *p < '1')))
			return (WRONG_ARGV);
		++i;
		++p;
	}
	if ((p - s) != 31)
		return (WRONG_ARGV);
	return (SUCCESS);
}
