/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 23:20:18 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:34:25 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			digneg(const char *str, int i, int res);

int			ft_atoi(const char *str)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == 10 || str[i] == '\v' ||  str[i] == 9 ||  str[i] == '\r'
			||  str[i] == '\f' ||  str[i] == ' ')
			i++;
		else if (str[i] == '-' || str[i] == '+' || ft_isdigit(str[i]))
			return (digneg(str, i, res));
		else
			return (0);
	}
	return (0);
}

int			digneg(const char *str, int i, int res)
{
	int		mod;
	int		num;

	num = 0;
	mod = 1;
	while (1)
	{
		if (str[i] == '+' && num < 1)
		{
			i++;
			num++;
		}
		if (str[i] == '-' && num < 1)
		{
			mod = -1;
			num++;
			i++;
		}
		if (num > 0 && ft_isdigit(str[i]) == 0)
			return (res * mod);
		if (ft_isdigit(str[i]) && num++ >= 1)
			res = res * 10 + (str[i++] - 48);
	}
	return (0);
}
