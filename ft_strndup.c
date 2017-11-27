/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 19:33:23 by caroua            #+#    #+#             */
/*   Updated: 2017/11/26 19:33:40 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char *dst;

	if (!(dst = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	dst = ft_strncpy(dst, s1, n);
	dst[n] = '\0';
	return (dst);
}
