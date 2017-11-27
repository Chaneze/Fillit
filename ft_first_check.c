/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:19:25 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 10:49:47 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_first_check(char *str)
{
	int dot;
	int diese;
	int endl;

	dot = 0;
	diese = 0;
	endl = 0;
	while (*str)
	{
		if (*str == '.')
			dot++;
		else if (*str == '#')
			diese++;
		else if (*str == '\n')
			endl++;
		else
			ft_error();
		str++;
	}
	if (diese < 4)
		ft_error();
	if (dot % 4 || diese % 4 || (endl + 1) % 5)
		ft_error();
	return (diese / 4);
}
