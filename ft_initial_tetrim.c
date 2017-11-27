/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initial_tetrim.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:20:17 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 13:18:42 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_initial_tetrim(char *str)
{
	int		i;
	int		j;
	char	c;
	t_tetri	*tetrim;
	t_tetri	*tmp;

	j = 0;
	c = 'A';
	i = ft_first_check(str);
	if (!(tetrim = (t_tetri *)malloc(sizeof(t_tetri))))
		return (NULL);
	tmp = tetrim;
	while (i-- > 0)
	{
		tmp->str = ft_strndup(&str[j], 20);
		ft_second_check(tmp->str);
		tmp->c = c++;
		j = j + 21;
		if (!(tmp->next = (t_tetri *)malloc(sizeof(t_tetri))))
			return (NULL);
		tmp = tmp->next;
	}
	tmp->next = NULL;
	return (tetrim);
}
