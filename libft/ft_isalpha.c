/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:03:27 by krassudi          #+#    #+#             */
/*   Updated: 2024/05/26 18:51:38 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int chr)
{
	int	down_case;
	int	up_case;

	down_case = (97 <= chr && chr <= 122);
	up_case = (65 <= chr && chr <= 90);
	if (down_case || up_case)
	{
		return (1);
	}
	return (0);
}
