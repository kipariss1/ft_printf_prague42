/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:36:00 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/07 17:59:07 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	
	i = 0;
	va_start(args, str);
	printf("%s", str);
	va_end(args);
	return (0);
}

int	main(void)
{
	char test = 'a';
	ft_printf("%c", test);
}