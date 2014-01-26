/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 04:48:12 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 11:06:20 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	int		res;

	res = 0;
	i = ft_strlen(s);
	while (i-- >= 0 && res == 0)
		if (s[i + 1] == (char)c)
			res = i;
	if (res != 0)
		return ((char *)(&s[res] + 1));
	return (NULL);
}
