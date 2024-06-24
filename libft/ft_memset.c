/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:27:01 by krassudi          #+#    #+#             */
/*   Updated: 2024/05/26 18:59:25 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*ptr;

	ptr = s;
	if (n < 0)
		return (s);
	while (n-- > 0)
	{
		*ptr++ = c;
	}
	return (s);
}
