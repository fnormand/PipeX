/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 23:07:32 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:39:05 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*plop;
	int		sign;
	int		i;
	int		tmp;

	i = 2;
	sign = (n < 0 ? 1 : 0);
	sign = (n == -2147483648 ? -1 : sign);
	n = (sign == -1 ? n + 1 : n);
	n = (ft_abs(sign) ? n * -1 : n);
	tmp = n;
	while ((tmp = tmp / 10) > 0)
		i++;
	i = i + ft_abs(sign);
	plop = (char *)ft_memalloc(i);
	plop[--i] = '\0';
	while (--i >= ft_abs(sign))
	{
		plop[i] = (n - ((n / 10) * 10) + 48);
		n = n / 10;
	}
	if (sign == -1)
		plop[10] = '8';
	plop[0] = (ft_abs(sign) == 0 ? plop[0] : '-');
	return (plop);
}
