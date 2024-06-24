/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:28:56 by krassudi          #+#    #+#             */
/*   Updated: 2024/05/26 18:57:39 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	diff;
	int	up_case;

	diff = 'a' - 'A';
	up_case = (65 <= c && c <= 90);
	if (!ft_isalpha(c) || up_case)
		return (c);
	return (c - diff);
}
