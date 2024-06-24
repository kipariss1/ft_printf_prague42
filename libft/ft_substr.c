/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:58:10 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/05 11:52:04 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	strlen;

	if (!s)
		return (0);
	strlen = ft_strlen((char *)s);
	if (start >= strlen)
		return (ft_strdup(""));
	if (start + len > strlen)
		len = strlen - start;
	res = malloc(len + 1);
	if (res == 0)
		return (0);
	i = 0;
	while (i < len && s[start + i])
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
