/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 02:56:22 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:43:40 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	int		size;
	char	*t2;
	char	*t1;

	t1 = (char *)s1;
	t2 = (char *)s2;
	size = n;
	while (((void *)t2 - s2) < size)
	{
		*t1 = *t2;
		if (c % 256 == *(t2))
			return ((void *)(t1) + 1);
		t2++;
		t1++;
	}
	return (NULL);
}
