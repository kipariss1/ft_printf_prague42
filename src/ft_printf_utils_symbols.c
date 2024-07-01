/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_symbols.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:49:01 by krassudi          #+#    #+#             */
/*   Updated: 2024/07/01 22:19:31 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printchar(char ch)
{
	ft_putchar_fd(ch, 1);
	return (1);
}

int	printstr(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

static int	print_into_hex(size_t num)
{
	char	*base;
	int		print_len;
	int		i;
	char	str[16];

	i = 0;
	print_len = 0;
	base = "0123456789abcdef";
	while (num)
	{
		str[i++] = base[num % 16];
		num = num / 16;
	}
	str[i] = 'e';
	while (i--)
		print_len += write(1, &str[i], 1);
	return (print_len);
}

int	printptr(size_t ptr)
{
	int	print_len;

	print_len = 0;
	if (ptr == 0)
		print_len += write(1, "(nil)", 5);
	else
	{
		print_len += write(1, "0x", 2);
		print_len += print_into_hex(ptr);
	}
	return (print_len);
}
