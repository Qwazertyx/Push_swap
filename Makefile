# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 15:08:55 by vsedat            #+#    #+#              #
#    Updated: 2021/11/27 19:44:48 by vsedat           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	=	push_swap.c	\
			checkarg.c	\
			utils.c		\
			algo.c		\
			

OBJ	= ${SRCS:%.c=%.o}

NAME	= push_swap

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:		Makefile push_swap.h
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I includes

${NAME}:	${OBJ}
			make -C libft
			gcc -o ${NAME} ${OBJ}

all: 	${NAME}

clean:
		make clean -C libft
		rm -f ${OBJ}

fclean:	clean
		make fclean -C libft
		rm -rf ${NAME} 

re:	fclean all

.PHONY:	all clean fclean re
