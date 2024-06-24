/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:36:00 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/24 21:52:01 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	
	i = 0;
	va_start(args, str);
	printf("%s", str);
	va_end(args);
	(void)i;
	return (0);
}

int	main(void)
{
	char test = 'a';
	ft_printf("%c", test);
}