# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 15:08:55 by vsedat            #+#    #+#              #
#    Updated: 2022/02/07 17:07:14 by vsedat           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

##**********##
### COLORS ###
##**********##
BLACK		= \033[1;30m
RED			= \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
VIOLET		= \033[1;35m
CYAN		= \033[1;36m
WHITE		= \033[1;37m

IBLACK		= \033[40m
IRED		= \x1b[41m
IGREEN		= \x1b[42m
IYELLOW		= \x1b[43m
IBLUE		= \x1b[44m
IPURPLE		= \x1b[45m
ICYAN		= \x1b[46m
IWHITE		= \x1b[47m

END			= \033[0m
UNDERLINE	= \x1b[4m
REV			= \x1b[7m

##********##
### NAME ###
##********##
NAME	= push_swap

##***************##
### COMPILATION ###
##**************###
CC		= gcc -Ofast
CFLAGS	= -Wall -Wextra -Werror
CMLX	= -framework OpenGL -framework AppKit -g -lmlx -Lmlx

##*******************##
### DIRECTORY PATHS ###
##*******************##
HEADER		= ./incl/push_swap.h
MLX			= ./mlx
OBJ_PATH	= ./objs
SRC_PATH	= ./srcs

##***********##
### OBJECTS ###
##***********##
SRCS = $(addprefix $(SRC_PATH)/,$(SOURCES))
OBJS = $(addprefix $(OBJ_PATH)/,$(SOURCES:.c=.o))

##****************##
### SOURCE FILES ###
##****************##
SOURCES	=	push_swap.c	\
			checkarg.c	\
			utils.c		\
			algo.c		\
			functions.c	\
			functions1.c\
			functions2.c\
			maketab.c	\

##*********##
### RULES ###
##*********##

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(HEADER) Makefile
			@mkdir -p objs
			@echo "$(BLUE)$(UNDERLINE)Compiling:$(END)$(CYAN) $<"
			@${CC} -c $< -o $@
#add ${CFLAGS} asap
all:	${NAME}

${NAME}:	${OBJS}
			@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			@echo "$(GREEN)Successful compilation"
	
clean:
		@rm -f ${OBJS}
		@echo "$(BLUE)Object files cleaned$(DEF_COLOR)"

100:
	python3 pyviz.py `ruby -e "puts (1..100).to_a.shuffle.join(' ')"`

500:
	python3 pyviz.py `ruby -e "puts (1..500).to_a.shuffle.join(' ')"`

fclean:	clean
		@rm -f ${NAME}
		@echo "$(CYAN)Executable files cleaned$(END)"

re:	fclean
	@${MAKE} all
	@echo "$(VIOLET)Cleaned and rebuilt everything$(END)"

sus:
	@echo "$(IRED)⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣤⣤⣤⣤⣶⣦⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀$(END)"
	@echo "$(IRED)⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⡿⠛⠉⠙⠛⠛⠛⠛⠻⢿⣿⣷⣤⡀⠀⠀⠀⠀⠀$(END)"
	@echo "$(IRED)⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⠋⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⠈⢻⣿⣿⡄⠀⠀⠀⠀$(END)"
	@echo "$(IRED)⠀⠀⠀⠀⠀⠀⠀⣸⣿⡏⠀⠀⠀⣠⣶⣾⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣄⠀⠀⠀$(END)"
	@echo "$(IRED)⠀⠀⠀⠀⠀⠀⠀⣿⣿⠁⠀⠀⢰⣿⣿⣯⠁⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣷⡄⠀$(END)"
	@echo "$(IRED)⠀⠀⣀⣤⣴⣶⣶⣿⡟⠀⠀⠀⢸⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣷⠀$(END)"
	@echo "$(IRED)⠀⢰⣿⡟⠋⠉⣹⣿⡇⠀⠀⠀⠘⣿⣿⣿⣿⣷⣦⣤⣤⣤⣶⣶⣶⣶⣿⣿⣿⠀$(END)"
	@echo "$(IRED)⠀⢸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀$(END)"
	@echo "$(IRED)⠀⣸⣿⡇⠀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠉⠻⠿⣿⣿⣿⣿⡿⠿⠿⠛⢻⣿⡇⠀⠀$(END)"
	@echo "$(IRED)⠀⠸⣿⣧⡀⠀⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠃⠀⠀$(END)"
	@echo "$(IRED)⠀⠀⠛⢿⣿⣿⣿⣿⣇⠀⠀⠀⠀⠀⣰⣿⣿⣷⣶⣶⣶⣶⠶⠀⢠⣿⣿⠀⠀⠀$(END)"
	@echo "$(IRED)⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⣽⣿⡏⠁⠀⠀⢸⣿⡇⠀⠀⠀$(END)"
	@echo "$(IRED)⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⣿⣿⡇⠀⢹⣿⡆⠀⠀⠀⣸⣿⠇⠀⠀⠀$(END)"
	@echo "$(IRED)⠀⠀⠀⠀⠀⠀⠀⢿⣿⣦⣄⣀⣠⣴⣿⣿⠁⠀⠈⠻⣿⣿⣿⣿⡿⠏⠀⠀⠀⠀$(END)"
	@echo "$(IRED)⠀⠀⠀⠀⠀⠀⠀⠈⠛⠻⠿⠿⠿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀$(END)"
	@echo "$(WHITE)⠀⠀⠀⠀⠀⠀⠀⠀⠀░█▀▀░█░█░█▀▀$(END)"
	@echo "$(WHITE)⠀⠀⠀⠀⠀⠀⠀⠀⠀░▀▀█░█░█░▀▀█$(END)"
	@echo "$(WHITE)⠀⠀⠀⠀⠀⠀⠀⠀⠀░▀▀▀░▀▀▀░▀▀▀$(END)"

.PHONY:	all clean fclean re 100 500 sus

