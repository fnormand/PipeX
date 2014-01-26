/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 02:33:23 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 11:01:15 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(dst);
	while (++i < (signed)size - len - 1 && src[i] != '\0')
		dst[i + len] = src[i];
	if (size > 0)
		dst[i + len] = '\0';
	if ((signed)size < len)
		len = size;
	return (len + ft_strlen(src));
}
