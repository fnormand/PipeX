/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 03:29:17 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:45:02 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;

	i = -1;
	while (++i < (signed)n)
		if (*(char *)(s + i) == (char)c)
			return (s + i);
	return (NULL);
}
