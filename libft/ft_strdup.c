/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 08:13:37 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:59:07 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*res;
	int		l;

	l = ft_strlen(s1);
	res = ft_memalloc(sizeof(char) * l);
	res[l] = 0;
	while (--l >= 0)
		res[l] = s1[l];
	return (res);
}
