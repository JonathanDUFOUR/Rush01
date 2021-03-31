/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 22:57:01 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/20 23:40:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putnbr(int n)
{
	unsigned int	abs;
	char			d;

	abs = n;
	if (n < 0)
	{
		write(1, "-", 1);
		abs = -n;
	}
	if (abs > 9)
		ft_putnbr(abs / 10);
	d = abs % 10 + '0';
	ft_putchar(d);
}
