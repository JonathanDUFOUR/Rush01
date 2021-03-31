/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:14:16 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/21 00:17:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int ac, char **av)
{
	int	ret;

	if (ac != 2)
		return (err_msg(WRONG_ARGC));
	ret = check_input(av[1]);
	if (ret != SUCCESS)
		return (err_msg(WRONG_ARGV));
	ret = rush(av[1]);
	if (ret != SUCCESS)
		return (err_msg(ret));
	return (SUCCESS);
}
