/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:28:59 by krassudi          #+#    #+#             */
/*   Updated: 2024/05/26 18:57:04 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	diff;
	int	down_case;

	diff = 'a' - 'A';
	down_case = (97 <= c && c <= 122);
	if (!ft_isalpha(c) || down_case)
		return (c);
	return (c + diff);
}
