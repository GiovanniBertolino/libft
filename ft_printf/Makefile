# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/30 15:23:32 by gbertoli          #+#    #+#              #
#    Updated: 2025/12/05 17:36:12 by gbertoli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC= ft_printf.c print_char.c print_decimal.c print_hexadecimal_lowercase.c \
	print_hexadecimal_uppercase.c print_int.c print_percent.c print_pointer.c \
	print_string.c print_unsigned_decimal.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
