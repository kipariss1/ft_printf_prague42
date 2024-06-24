/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:03:27 by krassudi          #+#    #+#             */
/*   Updated: 2024/05/23 17:15:01 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int chr)
{
	int	is_num;
	int	down_case;
	int	up_case;

	is_num = (48 <= chr && chr <= 57);
	down_case = (97 <= chr && chr <= 122);
	up_case = (65 <= chr && chr <= 90);
	if (is_num || down_case || up_case)
	{
		return (1);
	}
	return (0);
}
