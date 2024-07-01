# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/30 23:57:36 by krassudi          #+#    #+#              #
#    Updated: 2024/07/01 22:44:46 by krassudi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 			= gcc
CFLAGS		= -Wall -Werror -Wextra -g

NAME 		= libftprintf.a
SRC_DIR 	= ./src/
LIB_DIR		= ./libft/
INCLDIR		= ./include/

SRC_FILES	= ft_printf.c ft_printf_utils_num.c ft_printf_utils_symbols.c ft_printf_utils_hex.c
SRC 		= $(addprefix $(SRC_DIR), $(SRC_FILES))

I_L_FLAGS	= -I${INCLDIR} -L${LIB_DIR} -lft

OBJ 		= $(SRC:.c=.o)

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

.c.o:
	${CC} ${CFLAGS} -c $< ${I_L_FLAGS} -o ${<:.c=.o}

libft :
	make -C ./libft all
	@echo "$(GREEN) Libft is compiled"

# rule for debug reasons
debug_ft_printf : libft
	${CC} ${CFLAGS} ${SRC} ${I_L_FLAGS} -o $@
	@echo "$(GREEN) ft_printf compiled"

$(NAME) : libft $(OBJ)
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar r $(NAME) $(OBJ)
	@echo "$(GREEN) updated libft with printf compiled"

all : $(NAME) clean

clean : 
	rm -f ./libft/libft.a
	rm -f debug_ft_printf
	rm -f $(OBJ)

fclean : clean
	rm -rf $(NAME)

.PHONY : libft clean fclean debug_ft_printf