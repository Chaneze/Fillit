/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 18:40:16 by caroua            #+#    #+#             */
/*   Updated: 2017/11/26 19:35:57 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_nb_w(char const *str, char c)
{
	int i;
	int word;
	int count;

	i = 0;
	word = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != c && str[i])
		{
			i++;
			word = 1;
		}
		if (str[i] == c)
			i++;
		if (word == 1)
		{
			count++;
			word = 0;
		}
	}
	return (count);
}

static int	ft_s(char const *s, char c, int i)
{
	int length;

	length = 0;
	while (s[i] != c && s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**dst;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s || !(dst = (char **)malloc(sizeof(char *) * (ft_nb_w(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
		{
			k = 0;
			if (!(dst[j] = (char *)malloc(sizeof(char) * (ft_s(s, c, i) + 1))))
				return (NULL);
			while (s[i] != c && s[i])
				dst[j][k++] = s[i++];
			dst[j++][k] = '\0';
		}
	}
	dst[j] = NULL;
	return (dst);
}
