CC 			= gcc
CFLAGS		= -Wall -Werror -Wextra -g3

NAME 		= libftprintf.a
SRC_DIR 	= ./src/
LIB_DIR		= ./libft/
INCLDIR		= ./include/

SRC_FILES	= ft_printf.c
SRC 		= $(addprefix $(SRC_DIR), $(SRC_FILES))

I_L_FLAGS	= -I${INCLDIR} -L${LIB_DIR} -lft

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

# rule for debug reasons
debug_ft_printf : libft
	${CC} ${CFLAGS} ${SRC} ${I_L_FLAGS} -o $@
	@echo "$(GREEN) ft_printf compiled"

clean : 
	rm -f ./libft/libft.a
	rm -f debug_ft_printf

.PHONY : libft clean debug_ft_printf