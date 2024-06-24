/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:06:38 by krassudi          #+#    #+#             */
/*   Updated: 2024/05/28 19:58:03 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
