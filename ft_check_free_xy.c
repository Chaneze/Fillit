/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_free_xy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:20:44 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 11:25:46 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_free_xy(char **square, t_tetri *tetrim, int min)
{
	int		x;
	int		y;
	int		i;

	y = 0;
	i = 0;
	while (y < min)
	{
		x = 0;
		while (x < min)
		{
			if (tetrim->x[i] == x && tetrim->y[i] == y && square[y][x] != '.')
				return (0);
			else if (tetrim->x[i] == x && tetrim->y[i] == y)
				i++;
			x++;
		}
		y++;
	}
	if (i < 4)
		return (0);
	return (1);
}
