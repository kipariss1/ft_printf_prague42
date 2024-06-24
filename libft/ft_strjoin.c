/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:56:44 by krassudi          #+#    #+#             */
/*   Updated: 2024/05/30 18:51:58 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (res == 0)
		return (0);
	while (*s1)
	{
		res[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		res[i] = *s2++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
