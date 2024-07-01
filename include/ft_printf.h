/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 22:32:04 by krassudi          #+#    #+#             */
/*   Updated: 2024/07/01 22:32:34 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include "stdarg.h"
# include "stdlib.h"
# include "unistd.h"

int	ft_printf(const char *str, ...);
int	printchar(char ch);
int	printstr(char *str);
int	printptr(size_t ptr);
int	print_int(int num);
int	print_uint(unsigned int num);
int	print_hex(unsigned int num, char bs_case);

#endif