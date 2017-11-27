/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initial_xy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:24:10 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 10:32:16 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_tetri	*ft_find_xy(t_tetri *tetrim, char **str)
{
	int		x;
	int		y;
	int		i;

	y = 0;
	i = 0;
	while (str[y])
	{
		x = 0;
		while (str[y][x])
		{
			if (str[y][x] == '#')
			{
				tetrim->x[i] = x;
				tetrim->y[i] = y;
				i++;
			}
			x++;
		}
		y++;
	}
	return (tetrim);
}

t_tetri			*ft_initial_xy(t_tetri *tetrim)
{
	t_tetri	*tmp;

	tmp = tetrim;
	while (tetrim->next)
	{
		tetrim = ft_find_xy(tetrim, ft_strsplit(tetrim->str, '\n'));
		free(tetrim->str);
		tetrim = tetrim->next;
	}
	return (tmp);
}
