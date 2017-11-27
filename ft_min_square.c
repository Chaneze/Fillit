/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:43:17 by caroua            #+#    #+#             */
/*   Updated: 2017/11/26 16:46:00 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_min_square(t_tetri *tetrim)
{
	int		i;
	int		min;

	i = 0;
	min = 2;
	while (tetrim->next && i++)
		tetrim = tetrim->next;
	while (min * min < i * 4)
		min++;
	return (min);
}
