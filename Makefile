#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcharles <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/09/25 21:57:29 by rcharles          #+#    #+#              #
#    Updated: 2013/12/31 10:14:47 by rcharles         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = pipex

SRC = pipex.c ft_func.c

LIBPATH = ./libft

FLAGS = -g -Wall -Werror -Wextra -I $(LIBPATH)

LFLAGS = -g -lmlx -lXext -lX11 -L$(LIBPATH) -L/usr/X11/lib -lft

all: lib $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	gcc -o $(NAME) $(SRC:%.c=%.o) $(LFLAGS)

lib:
	make -C ./libft

clean:
	rm -f $(SRC:%.c=%.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all $(NAME) lib clean fclean re
