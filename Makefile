# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmorelli <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 17:47:04 by lmorelli          #+#    #+#              #
#    Updated: 2023/02/06 16:36:53 by lmorelli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_hex_putnbr.c ft_putchar.c ft_putstr.c ft_putaddress.c ft_unsigned_putnbr.c ft_putnbr.c
OBJ = $(SRC:%.c=%.o)
CC = gcc -c
FLAGS = -Werror -Wall -Wextra

all : $(NAME)
$(NAME) :
	$(CC) $(FLAGS) -I ./ $(SRC)
	ar rcs $(NAME) $(OBJ)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
