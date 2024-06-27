/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:36:00 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/27 22:17:02 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	
	i = 0;
	ft_putstr_fd((char *)str, 1);
	ft_putchar_fd('\n', 1);
	va_start(args, str);
	while (i < 3)
	{
		int arg = va_arg(args, int);
		ft_putnbr_fd(arg, 1);
		i++;
	}
	ft_putchar_fd('\n', 1);
	va_end(args);
	(void)i;
	return (0);
}

int	main(void)
{
	ft_printf("This is the test for printing numbers: %d %d %d", 1, 2, 3);
	return (0);
}