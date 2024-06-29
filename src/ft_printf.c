/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:36:00 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/29 19:42:53 by krassudi         ###   ########.fr       */
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

int	main(void)
{
	char	test[] = "this is test";
	int		res;

	res = ft_printf("This is the test for printing chars: %c %c %s %p %d %i\n", 'a',
			'b', test, &test, 16, 256);
	(void)res;
	return (0);
}
