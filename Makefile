# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caroua <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/26 20:00:56 by caroua            #+#    #+#              #
#    Updated: 2017/11/27 10:59:30 by caroua           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

HEADER = fillit.h

SRC =	ft_bzero.c \
		ft_check_free_xy.c \
		ft_create_empty_square.c \
		ft_erase.c \
		ft_error.c \
		ft_first_check.c \
		ft_initial_tetrim.c \
		ft_initial_xy.c \
		ft_memset.c \
		ft_min_square.c \
		ft_new_xy.c \
		ft_putchar.c \
		ft_putendl.c \
		ft_read.c \
		ft_second_check.c \
		ft_solution.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strncpy.c \
		ft_strndup.c \
		ft_strnew.c \
		ft_strsplit.c \
		main.c

OBJ = $(SRC:.c=.o)

all:  $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@gcc -Wall -Werror -Wextra $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all
