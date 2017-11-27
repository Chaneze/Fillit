/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:05:02 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 10:34:47 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_read(char *file)
{
	int		fd;
	int		readf;
	int		i;
	char	tmp[545];
	char	buff[1];

	i = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		ft_error();
	while ((readf = read(fd, buff, 1)))
	{
		tmp[i++] = buff[0];
		if (i > 545)
			ft_error();
	}
	tmp[i] = '\0';
	if (close(fd) == -1)
		ft_error();
	return (ft_strdup(tmp));
}
