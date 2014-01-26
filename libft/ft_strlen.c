/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 04:41:06 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:25:42 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t						ft_strlen(const char *text)
{
	const char				*s;
	unsigned int			*pdwText;
	register unsigned int	dwText;

	pdwText = (unsigned int *)text;
	while (1)
	{
		dwText = *pdwText;
		if ((dwText - 0x01010101UL) & ~dwText & 0x80808080UL)
		{
			s = (const char *)pdwText;
			while (*s)
				s++;
			return (s - text);
		}
		pdwText++;
	}
	return (0);
}
