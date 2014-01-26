/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 02:32:43 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:56:54 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;
	int		res;

	res = 0;
	i = -1;
	while (s[++i] != '\0' && res == 0)
		if (s[i] == (char)c)
			res = i + 1;
	if ((char)c == '\0')
		return ((char *)&s[i]);
	if (res != 0)
		return ((char *)(&s[res - 1]));
	return (NULL);
}
