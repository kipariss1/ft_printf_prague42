/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:29:17 by krassudi          #+#    #+#             */
/*   Updated: 2024/05/26 20:41:50 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d > s && d - s < n)
	{
		n--;
		while (n >= 0)
		{
			*(d + n) = *(s + n);
			n--;
		}
	}
	else
	{
		while (n-- > 0)
		{
			*d++ = *s++;
		}
	}
	return (dest);
}
