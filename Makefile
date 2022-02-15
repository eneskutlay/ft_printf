# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/13 01:11:38 by ekutlay           #+#    #+#              #
#    Updated: 2022/02/15 03:59:19 by ekutlay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_printf_number.c ft_printf_string.c
NAME = libftprintf.a
OBJS = ${SRC:.c=.o}


%.o:
	${CC} ${CFLAGS} -c ${SRC}

${NAME}:	${OBJS}
	ar -rcs $@ $^

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
