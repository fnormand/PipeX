/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:47:01 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:49:21 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *s1, const void *s2, size_t n)
{
	int		i;
	char	*tmp;

	tmp = (char *)ft_memalloc(sizeof(char) * n);
	i = -1;
	while ((unsigned)++i < n)
		tmp[i] = *(char *)(s2 + i);
	i = -1;
	while ((unsigned)++i < n)
		*(char *)(s1 + i) = tmp[i];
	return (s1);
}
