/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:37:47 by caroua            #+#    #+#             */
/*   Updated: 2017/11/26 18:39:46 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_erase(char **square, t_tetri *tetrim, int min)
{
	int		x;
	int		y;

	y = 0;
	while (y < min)
	{
		x = 0;
		while (x < min)
		{
			if (square[y][x] == tetrim->c)
				square[y][x] = '.';
			x++;
		}
		y++;
	}
	return (square);
}
