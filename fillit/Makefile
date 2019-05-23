# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awoodod <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/16 13:03:08 by awoodod           #+#    #+#              #
#    Updated: 2019/05/22 17:16:37 by awoodod          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC	=	main.c			\
		map.c			\
		reader.c		\
		solver.c		\
		tetrimino.c		\
		libft/libft.a

all: $(NAME)

CFLAGS = -g -Wall -Werror -Wextra -I.

$(NAME): $(SRC)
	gcc $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
