/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_empty_square.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:56:37 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 10:31:05 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_create_empty_square(char **square, int min)
{
	int y;
	int x;

	y = 0;
	if (!(square = (char **)malloc(sizeof(char *) * (min + 1))))
		return (NULL);
	while (y < min)
	{
		square[y] = ft_strnew(min);
		x = 0;
		while (x < min)
		{
			square[y][x] = '.';
			x++;
		}
		y++;
	}
	square[y] = NULL;
	return (square);
}
