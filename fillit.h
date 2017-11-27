/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caroua <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:38:18 by caroua            #+#    #+#             */
/*   Updated: 2017/11/27 10:30:38 by caroua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

typedef struct		s_tetri
{
	int				x[4];
	int				y[4];
	char			c;
	char			*str;
	struct s_tetri	*next;
}					t_tetri;

char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *s);
char				*ft_strndup(const char *s1, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				**ft_strsplit(char const *s, char c);
char				*ft_strnew(size_t size);
void				ft_putchar(char c);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t len);
void				ft_putendl(char const *s);
void				ft_error_argv(void);
void				ft_error(void);
char				*ft_read(char *file);
t_tetri				*ft_initial_tetrim(char *str);
int					ft_first_check(char *str);
void				ft_second_check(char *str);
t_tetri				*ft_initial_xy(t_tetri *tetrim);
int					ft_min_square(t_tetri *tetrim);
char				**ft_solution(t_tetri *tetrim, int min);
char				**ft_create_empty_square(char **square, int min);
t_tetri				*ft_new_xy(t_tetri *tetrim, int x, int y);
int					ft_check_free_xy(char **square, t_tetri *tetrim, int min);
char				**ft_erase(char **square, t_tetri *tetrim, int min);

#endif
