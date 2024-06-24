/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 22:17:31 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/05 23:11:33 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	i;
	size_t	n;

	n = ft_strlen((char *)s);
	res = malloc(n + 1);
	if (!res)
		return (0);
	ft_bzero(res, n + 1);
	i = 0;
	while (s[i] && i < n)
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
