# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/21 22:16:21 by krassudi          #+#    #+#              #
#    Updated: 2024/06/24 20:23:34 by krassudi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_atoi.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strnstr.c \
		ft_memmove.c \
		ft_putnbr_fd.c \
		ft_memchr.c \
		ft_strrchr.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_memcmp.c \
		ft_substr.c \
		ft_tolower.c \
		ft_isalnum.c \
		ft_strlen.c \
		ft_isdigit.c \
		ft_calloc.c \
		ft_strjoin.c \
		ft_isprint.c \
		ft_strmapi.c \
		ft_split.c \
		ft_toupper.c \
		ft_strlcat.c \
		ft_bzero.c \
		ft_isalpha.c \
		ft_memset.c \
		ft_striteri.c \
		ft_isascii.c \
		ft_strlcpy.c \
		ft_memcpy.c \
		ft_putchar_fd.c \
		ft_strncmp.c \

SRCSB = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

OBJS = 	${SRCS:.c=.o}

OBJSB = ${SRCSB:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
NAME = libft.a
INCLUDE_FLAG = -I../include/

%.o : %.c
	${CC} ${CFLAGS} -c $< ${INCLUDE_FLAG} -o ${<:.c=.o}

$(NAME) : $(OBJS)
	ar rsc $(NAME) $(OBJS)

all : $(NAME) clean

bonus : $(NAME) $(OBJSB)
	ar rsc $(NAME) $(OBJS) $(OBJSB)

clean : 
	rm -f $(OBJS) $(OBJSB)

fclean : clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCSB)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJSB)

.PHONY : all bonus clean fclean re