/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 02:32:20 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 11:07:25 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	if (*s2 == 0)
		return ((char *)s1);
	i = -1;
	while (s1[++i] != 0)
	{
		j = 0;
		while (s1[i + j] == s2[j])
			if (s2[++j] == 0)
				return ((char *)&s1[i]);
	}
	return (NULL);
}
