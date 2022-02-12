# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/19 15:24:12 by jodufour          #+#    #+#              #
#    Updated: 2022/02/12 08:54:29 by jodufour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

######################################
#              COMMANDS              #
######################################
CC		=	clang -c -o
LINK	=	clang -o
MKDIR	=	mkdir -p
RM		=	rm -rf

######################################
#             EXECUTABLE             #
######################################
NAME	=	rush-01

#######################################
#             DIRECTORIES             #
#######################################
SRC_DIR	=	srcs/
OBJ_DIR	=	objs/
PRV_DIR	=	private/

######################################
#            SOURCE FILES            #
######################################
SRC		=	\
			${addprefix grid/,		\
				r1_grid_allocate.c	\
				r1_grid_clear.c		\
				r1_grid_fill.c		\
				r1_grid_init.c		\
				r1_grid_is_soluce.c	\
				r1_grid_is_valid.c	\
				r1_grid_print.c		\
			}						\
			main.c					\
			r1_err_msg.c			\
			r1_input_check.c		\
			r1_putnbr.c				\
			r1_run.c				\
			r1_solve.c

######################################
#            OBJECT FILES            #
######################################
OBJ		=	${SRC:.c=.o}
OBJ		:=	${addprefix ${OBJ_DIR}, ${OBJ}}

DEP		=	${OBJ:.o=.d}

#######################################
#                FLAGS                #
#######################################
CFLAGS	=	-Wall -Wextra -Werror
CFLAGS	+=	-MMD -MP
CFLAGS	+=	-I${PRV_DIR}

LDFLAGS	=	

ifeq (${DEBUG}, 1)
	CFLAGS	+=	-g
endif

#######################################
#                RULES                #
#######################################
${NAME}: ${OBJ}
	${LINK} $@ $^ ${LDFLAGS}

all: ${NAME}

-include ${DEP}

${OBJ_DIR}%.o: ${SRC_DIR}%.c
	@${MKDIR} ${@D}
	${CC} $@ ${CFLAGS} $<

clean:
	${RM} ${OBJ_DIR} ${NAME} vgcore.*

fclean:
	${RM} ${OBJ_DIR} ${NAME} vgcore.*

re: clean all

fre: fclean all

-include /home/jodufour/Templates/mk_files/coffee.mk
-include /home/jodufour/Templates/mk_files/norm.mk

.PHONY: all clean fclean re fre
