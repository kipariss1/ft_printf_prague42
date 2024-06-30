/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:49:01 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/30 23:43:14 by krassudi         ###   ########.fr       */
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

static int	numlen(int num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	while (num)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

int	print_int(int num)
{
	ft_putnbr_fd(num, 1);
	return (numlen(num));
}

static void	put_uint(unsigned int num)
{
	char	ch;

	if (num >= 10)
		print_uint(num / 10);
	ch = '0' + (num % 10);
	write(1, &ch, 1);
}

static int	numlen_u(unsigned int num)
{
	int	len;

	if (num == 0)
		return (1);
	len = 0;
	while (num)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

int	print_uint(unsigned int num)
{
	put_uint(num);
	return (numlen_u(num));
}

int	print_hex(unsigned int num, char bs_case)
{
	char	*base;
	char	num_hex[numlen_u(num)];
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (bs_case == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	while (num)
	{
		num_hex[i++] = base[num % 16];
		num = num / 16;
	}
	while (i--)
		len += write(1, &num_hex[i], 1);
	return (len);
}