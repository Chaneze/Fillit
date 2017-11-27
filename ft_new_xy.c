/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_xy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:14:01 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 13:21:30 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_new_xy(t_tetri *tetrim, int x, int y)
{
	int		xmin;
	int		ymin;
	int		i;

	xmin = 104;
	ymin = 104;
	i = 0;
	while (i != 4)
	{
		if (tetrim->x[i] < xmin)
			xmin = tetrim->x[i];
		if (tetrim->y[i] < ymin)
			ymin = tetrim->y[i];
		i++;
	}
	i = 0;
	while (i != 4)
	{
		tetrim->x[i] = tetrim->x[i] - xmin + x;
		tetrim->y[i] = tetrim->y[i] - ymin + y;
		i++;
	}
	return (tetrim);
}
