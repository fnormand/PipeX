/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 10:47:52 by fnormand          #+#    #+#             */
/*   Updated: 2013/12/31 09:45:49 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countsplit(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			while (*s != c && *s != '\0')
			{
				s++;
			}
			i++;
		}
	}
	return (i + 1);
}

static char		**str_end(char **str, size_t i)
{
	*(str + i) = '\0';
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	size_t		j;
	char		**str;

	i = 0;
	if (!s || !c)
		return (NULL);
	str = (char **)ft_memalloc(sizeof(char *) * ft_countsplit(s, c));
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			j = 0;
			while (*s != c && *s != '\0')
			{
				j++;
				s++;
			}
			str[i] = ft_strncpy(ft_strnew(j), (s - j), j);
			i++;
		}
	}
	return (str_end(str, i));
}
