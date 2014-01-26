/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 22:39:55 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 11:00:49 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		res = (char *)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		res[0] = 0;
		res[ft_strlen(s1) + ft_strlen(s2)] = 0;
		if (res != NULL)
		{
			if (ft_strlen(s1))
				ft_strcat(res, s1);
			if (ft_strlen(s2))
				ft_strcat(res, s2);
		}
	}
	return (res);
}
