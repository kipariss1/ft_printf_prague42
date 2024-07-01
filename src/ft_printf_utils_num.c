/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_num.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 22:18:40 by krassudi          #+#    #+#             */
/*   Updated: 2024/07/01 22:33:55 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
