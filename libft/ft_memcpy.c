/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:54:32 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/05 23:14:13 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char	*d;
	char	*s;

	if ((!dest && !src) && n > 0)
		return (0);
	d = (char *)dest;
	s = (char *)src;
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}
