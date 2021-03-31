# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/20 19:02:39 by jodufour          #+#    #+#              #
#    Updated: 2021/03/21 12:57:01 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-01

CC		=	gcc -c -o
LINKER	=	gcc -o
RM		=	rm -rf
MAKEDIR	=	mkdir -p

SRCD	=	srcs/
OBJD	=	objs/
INCLUDE	=	includes

SRCS	:=	\
			check_input.c	\
			err_msg.c		\
			fill_res.c		\
			init_res.c		\
			is_res_soluce.c	\
			is_res_valid.c	\
			main.c			\
			print_res.c		\
			rush.c			\
			solve.c			\
			ft_strlen.c		\
			ft_putchar.c	\
			ft_putendl.c	\
			ft_putnbr.c		\
			ft_putstr.c

OBJS	=	${SRCS:.c=.o}
OBJS	:=	${addprefix ${OBJD}, ${OBJS}}

CFLAGS	=	-Wall -Wextra -I ${INCLUDE}

${NAME}:	${OBJS}
	${LINKER} $@ $^

all:	${NAME}

${OBJD}%.o:	${SRCD}%.c
	${MAKEDIR} ${OBJD}
	${CC} $@ $^ ${CFLAGS}

clean:
	${RM} ${OBJD}

fclean:
	${RM} ${OBJD} ${NAME}

re:	fclean all

.PHONY:	all, clean, fclean, re
