/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:08:59 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 10:36:29 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error_argv(void)
{
	write(1, "usage : mettre uniquement un fichier en parametre\n", 50);
	exit(0);
}

void	ft_error(void)
{
	write(1, "error\n", 6);
	exit(0);
}
