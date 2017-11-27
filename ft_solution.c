/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 17:46:04 by caroua            #+#    #+#             */
/*   Updated: 2017/11/26 20:01:57 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		**ft_past(char **square, t_tetri *tetrim, int min)
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
			if (tetrim->x[i] == x && tetrim->y[i] == y)
			{
				square[y][x] = tetrim->c;
				i++;
			}
			x++;
		}
		square[y][x] = '\0';
		y++;
	}
	square[y] = NULL;
	return (square);
}

static char		**ft_findsol(char **sqr, t_tetri *tetrim, int min)
{
	int		x;
	int		y;
	char	**tmp;

	if (!tetrim->next)
		return (sqr);
	tmp = NULL;
	y = 0;
	while (y < min)
	{
		x = 0;
		while (x < min)
		{
			tetrim = ft_new_xy(tetrim, x, y);
			if (ft_check_free_xy(sqr, tetrim, min))
				tmp = ft_findsol(ft_past(sqr, tetrim, min), tetrim->next, min);
			if (tmp)
				return (tmp);
			sqr = ft_erase(sqr, tetrim, min);
			++x;
		}
		++y;
	}
	return (NULL);
}

char			**ft_solution(t_tetri *tetrim, int min)
{
	char	**square;

	square = NULL;
	while (!square)
	{
		square = ft_create_empty_square(square, min);
		square = ft_findsol(square, tetrim, min);
		min++;
	}
	return (square);
}
