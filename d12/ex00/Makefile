# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharris <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/28 12:36:07 by tharris           #+#    #+#              #
#    Updated: 2016/07/28 12:36:12 by tharris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c src/ft_strcmp.c src/ft_strlen.c src/ft_swap.c

HEADER_DIR = includes

all: comp

comp:
	gcc -c -Wall -Wextra -Werror -I $(HEADER_DIR) 
		ar rc $(NAME)) 
			ranlib $(NAME)

clean:
	rm -f 

fclean: clean
	rm -f $(NAME)

re: fclean all