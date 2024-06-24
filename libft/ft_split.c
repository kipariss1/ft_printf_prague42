/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:46:25 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/05 22:21:49 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	res;

	res = 0;
	if (s == 0 || s[0] == 0)
		return (res);
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
			res++;
		s++;
	}
	return (++res);
}

static int	*find_delimeters(char const *s, char c, int worlds_cnt)
{
	int		*res;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	res = malloc(sizeof(int) * (worlds_cnt));
	while (s[i] && j < worlds_cnt - 1)
	{
		if (s[i] == c && s[i + 1] != c)
		{
			res[j] = i;
			j++;
		}
		i++;
	}
	res[worlds_cnt - 1] = -1;
	return (res);
}

static void	split_into(char const *s, int *idxs, char ***strs, char c)
{
	size_t	begin;
	size_t	j;
	char	*temp;

	begin = 0;
	j = 0;
	while (idxs[j] != -1)
	{
		temp = ft_substr(s, begin, idxs[j] - begin);
		(*strs)[j] = ft_strtrim(temp, &c);
		free(temp);
		begin = idxs[j] + 1;
		j++;
	}
	temp = ft_substr(s, begin, ft_strlen((char *)s) - begin);
	(*strs)[j] = ft_strtrim(temp, &c);
	free(temp);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*trimmed_s;
	int		worlds_cnt;
	int		*idxs;

	if (!s)
		return (0);
	trimmed_s = ft_strtrim(s, &c);
	worlds_cnt = count_words(trimmed_s, c);
	strs = (char **)malloc(sizeof(char *) * (worlds_cnt + 1));
	if (!strs)
		return (free(trimmed_s), strs);
	strs[worlds_cnt] = 0;
	if (worlds_cnt == 0)
		return (free(trimmed_s), strs);
	idxs = find_delimeters(trimmed_s, c, worlds_cnt);
	split_into(trimmed_s, idxs, &strs, c);
	free(idxs);
	free(trimmed_s);
	return (strs);
}
