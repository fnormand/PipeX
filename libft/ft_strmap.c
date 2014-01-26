/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 06:10:05 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 11:02:23 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*res;
	unsigned int	len;

	res = NULL;
	if (s != NULL && f != NULL)
	{
		res = (char *)ft_memalloc(ft_strlen(s));
		len = 0;
		while (len < ft_strlen(s))
		{
			res[len] = (*f)(s[len]);
			len++;
		}
	}
	return (res);
}
