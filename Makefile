# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 10:54:27 by ychahbi           #+#    #+#              #
#    Updated: 2022/11/14 18:56:51 by ychahbi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC_N = ft_check.c ft_print_unsigned.c ft_printadd.c ft_printchar.c ft_printf.c ft_printhux.c ft_printnbr.c ft_printstr.c
OBJ_N = $(SRC_N:.c=.o)

all: $(NAME) 

$(NAME): $(OBJ_N)
		ar rc $(NAME) $(OBJ_N)

%.o: %.c ft_printf.h 
		$(CC) -o $@ -c $< $(CFLAGS)

clean:
		$(RM) $(OBJ_N) 

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re 