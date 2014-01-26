/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 02:33:00 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 11:04:37 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned int	j;

	if (*s2 == 0)
		return ((char *)s1);
	i = -1;
	while (s1[++i] != 0 && (unsigned)i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && i + j < n)
			if (s2[++j] == 0)
				return ((char *)&s1[i]);
	}
	return (NULL);
}
