/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:03:27 by krassudi          #+#    #+#             */
/*   Updated: 2024/05/26 18:57:19 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int chr)
{
	int	is_num;

	is_num = (48 <= chr && chr <= 57);
	if (is_num)
	{
		return (1);
	}
	return (0);
}
