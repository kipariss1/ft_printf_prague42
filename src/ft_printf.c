/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:36:00 by krassudi          #+#    #+#             */
/*   Updated: 2024/07/01 00:26:26 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	recognise_format(char ch, va_list args)
{
	int	print_len;

	if (ch == 'c')
		print_len = printchar((char)va_arg(args, int));
	else if (ch == 's')
		print_len = printstr(va_arg(args, char *));
	else if (ch == 'p')
		print_len = printptr(va_arg(args, size_t));
	else if (ch == 'd' || ch == 'i')
		print_len = print_int(va_arg(args, int));
	else if (ch == 'u')
		print_len = print_uint(va_arg(args, unsigned int));
	else if (ch == 'x')
		print_len = print_hex(va_arg(args, unsigned int), 'x');
	else if (ch == 'X')
		print_len = print_hex(va_arg(args, unsigned int), 'X');
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		fin_print_len;
	va_list	args;

	va_start(args, str);
	fin_print_len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			fin_print_len += recognise_format(str[++i], args);
			i++;
			continue ;
		}
		else
			ft_putchar_fd(str[i], 1);
		i++;
		fin_print_len++;
	}
	va_end(args);
	return (fin_print_len);
}
