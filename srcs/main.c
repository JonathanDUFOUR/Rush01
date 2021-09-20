/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 19:14:16 by jodufour          #+#    #+#             */
/*   Updated: 2021/09/20 18:13:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include "enum/e_ret.h"

int	main(int ac, char **av)
{
	int	ret;

	ret = SUCCESS;
	if (ac != 2)
		ret = AC_ERR;
	if (ret == SUCCESS)
		ret = r1_input_check(av[1]);
	if (ret == SUCCESS)
		ret = r1_run(av[1]);
	if (ret != SUCCESS)
		r1_err_msg(ret);
	return (ret);
}
