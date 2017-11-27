/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:50:35 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 17:52:46 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_tetri	*tetrim;
	char	*read;
	char	**solution;

	if (argc != 2)
		ft_error_argv();
	read = ft_read(argv[1]);
	tetrim = ft_initial_tetrim(read);
	tetrim = ft_initial_xy(tetrim);
	solution = ft_solution(tetrim, ft_min_square(tetrim));
	free(tetrim);
	while (*solution)
		ft_putendl(*solution++);
	return (0);
}
