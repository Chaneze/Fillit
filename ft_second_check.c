/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_second_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:17:27 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 10:52:57 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		*ft_find_diese(int i, char *str)
{
	if (i + 1 <= 20 && str[i + 1] == '#')
	{
		str[i + 1] = 'a';
		str = ft_find_diese(i + 1, str);
	}
	if (i - 1 >= 0 && str[i - 1] == '#')
	{
		str[i - 1] = 'a';
		str = ft_find_diese(i - 1, str);
	}
	if (i + 5 <= 20 && str[i + 5] == '#')
	{
		str[i + 5] = 'a';
		str = ft_find_diese(i + 5, str);
	}
	if (i - 5 >= 0 && str[i - 5] == '#')
	{
		str[i - 5] = 'a';
		str = ft_find_diese(i - 5, str);
	}
	return (str);
}

static int		ft_count_diese(char *str)
{
	int diese;

	diese = 0;
	while (*str)
	{
		if (*str == 'a')
			diese++;
		str++;
	}
	return (diese);
}

static int		ft_count_dot(char *str)
{
	int dot;

	dot = 0;
	while (*str)
	{
		if (*str == '.')
			dot++;
		str++;
	}
	return (dot);
}

void			ft_second_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '#')
		i++;
	str[i] = 'a';
	str = ft_find_diese(i, str);
	if (ft_count_diese(str) != 4 || ft_count_dot(str) != 12)
		ft_error();
	while (*str)
	{
		if (*str == 'a')
			*str = '#';
		str++;
	}
}
