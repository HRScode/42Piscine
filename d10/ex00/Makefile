# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharris <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 14:06:57 by tharris           #+#    #+#              #
#    Updated: 2016/07/25 14:06:59 by tharris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c src/ft_strcmp.c src/ft_strlen.c src/ft_swap.c

HEADER_DIR = includes

all: comp

comp:
	gcc -c -Wall -Wextra -Werror -I $(HEADER_DIR 
		ar rc $(NAME)) ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o ft_putchar.o ft_putstr.o ranlib
		         $(NAME)

clean:
	rm -f ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o ft_putchar.o ft_putstr.o

fclean: clean
	rm -f $(NAME)

re: fclean all