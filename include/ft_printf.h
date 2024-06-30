#ifndef FTPRINTF_H
# define FTPRINTF_H

# include "libft.h"
# include "stdarg.h"
# include "stdlib.h"
# include "unistd.h"

int	ft_printf(const char *str, ...);
int	printchar(char ch);
int	printstr(char *str);
int	printptr(size_t ptr);
int	print_int(int num);
int	print_uint(unsigned int num);
int	print_hex(unsigned int num, char bs_case);

#endif