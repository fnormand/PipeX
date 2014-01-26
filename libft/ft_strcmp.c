/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 23:05:47 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:57:59 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = -1;
	while (s1[++i] != 0 || s2[i] != 0)
		if ((unsigned)s1[i] != (unsigned)s2[i])
			return ((unsigned)s1[i] - (unsigned)s2[i]);
	return (0);
}
