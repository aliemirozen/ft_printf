# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aliemirozen <alozen@student.42istanbul.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 15:28:59 by aliemirozen       #+#    #+#              #
#    Updated: 2023/02/12 15:29:01 by aliemirozen      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
list=ft_printf.c \
		ft_printf_num.c \
		ft_printf_others.c \
		ft_printf_utils.c

OBJS = $(list:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

all:		${NAME}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean ${NAME}
.PHONY: clean fclean all re
