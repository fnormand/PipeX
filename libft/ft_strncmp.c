/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 17:14:20 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 11:03:46 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;

	i = -1;
	while ((s1[++i] != 0 || s2[i] != 0) && (unsigned)i < n && n != 0)
		if ((unsigned)s1[i] != (unsigned)s2[i])
			return ((unsigned)s1[i] - (unsigned)s2[i]);
	return (0);
}
