/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 22:54:15 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:30:12 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		b;
	int		e;
	int		i;
	char	*res;

	if (s != NULL)
	{
		i = -1;
		while (s[++i] == 9 || s[i] == 10 || s[i] == 32)
			;
		b = i;
		i = ft_strlen(s) - 1;
		while (s[i] == 9 || s[i] == 10 || s[i] == 32)
			i--;
		e = i;
		if (b < e)
			return (ft_strsub(s, b, e - b + 1));
		else
		{
			res = ft_memalloc(1);
			ft_bzero(res, 1);
			return (res);
		}
	}
	return (NULL);
}
