/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:54:16 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/04 00:28:41 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !s1[0])
		return (ft_strdup(""));
	if (!set || !set[0])
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
