/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krassudi <krassudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:47:25 by krassudi          #+#    #+#             */
/*   Updated: 2024/06/05 11:21:38 by krassudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*p;

	if (nelem > 0 && elsize > SIZE_MAX / nelem)
		return (0);
	if (nelem == 0 || elsize == 0)
	{
		nelem = 1;
		elsize = 1;
	}
	p = (void *)malloc(nelem * elsize);
	if (p)
		ft_bzero(p, nelem * elsize);
	return (p);
}
