CC 			= gcc
CFLAGS		= -Wall -Werror -Wextra -g3

NAME 		= libftprintf.a
SRC_DIR 	= ./src/
LIB_DIR		= ./libft/
INCLDIR		= ./include/

# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

libft :
	make -C ./libft all
	@echo "$(GREEN) Libft is compiled"

clean : 
	rm -f ./libft/libft.a

.PHONY : libft clean