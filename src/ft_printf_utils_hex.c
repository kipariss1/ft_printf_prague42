/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 22:30:17 by krassudi          #+#    #+#             */
/*   Updated: 2024/07/01 22:30:36 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_hex(unsigned int num, char bs_case)
{
	char	*base;
	char	num_hex[16];
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
