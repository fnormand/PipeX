/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 06:20:39 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 11:02:48 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	len;

	res = NULL;
	if (s != NULL && f != NULL)
	{
		len = 0;
		res = (char *)ft_memalloc(ft_strlen(s));
		while (len < ft_strlen(s))
		{
			res[len] = (*f)(len, s[len]);
			len++;
		}
	}
	return (res);
}
