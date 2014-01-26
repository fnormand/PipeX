/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 21:58:09 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 11:08:21 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		l;
	int		i;

	res = NULL;
	i = -1;
	if (s != NULL)
	{
		l = len;
		res = ft_memalloc(l + 1);
		if (res != NULL)
		{
			res[l] = '\0';
			while (++i < l)
				res[i] = s[start + i];
		}
	}
	return (res);
}
