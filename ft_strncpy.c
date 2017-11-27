/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 20:49:30 by caroua            #+#    #+#             */
/*   Updated: 2017/11/26 19:37:26 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *tmpdst;

	tmpdst = dst;
	while (*src != '\0' && len > 0)
	{
		*tmpdst++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*tmpdst++ = '\0';
		len--;
	}
	return (dst);
}
