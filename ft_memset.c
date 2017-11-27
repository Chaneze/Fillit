/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:18:53 by caroua            #+#    #+#             */
/*   Updated: 2017/11/26 19:47:53 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char *tmp;

	tmp = s;
	while (len > 0)
	{
		*tmp++ = (unsigned char)c;
		len--;
	}
	return (s);
}
