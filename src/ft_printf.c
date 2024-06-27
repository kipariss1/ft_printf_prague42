/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:36:00 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/27 23:27:19 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	recognise_format(char ch, va_list args)
{
	if (ch == 'c')
	{
		// case of printing char
		ft_putchar_fd((char)va_arg(args, int), 1);
		return (1);
	}
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		fin_print_len;
	va_list	args;
	va_start(args, str);
	fin_print_len = 0;
	while (str[i])
	{
		if (str[i] == '%')
			fin_print_len += recognise_format(str[++i], args);
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
	ft_printf("This is the test for printing chars: %c %c %c\n", 'a', 'b', 'c');
	return (0);
}