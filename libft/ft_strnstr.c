/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:17:13 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/07 14:40:42 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	little_len;

	i = 0;
	if (!little[0])
		return ((char *)big);
	if (len == 0)
		return (0);
	little_len = ft_strlen((char *)little);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (j == little_len - 1)
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}
