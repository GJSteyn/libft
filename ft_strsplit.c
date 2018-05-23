/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:31:15 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/23 16:37:36 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_count(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		if (*s && *s == c)
		{
			while (*s && *s == c)
				s++;
		}
	}
	return (i);
}

static int	ft_strclen(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int		w_len;
	int		w_count;
	int		i;
	char	**full;

	i = 0;
	w_count = word_count(s, c);
	full = (char**)malloc(sizeof(char*) * w_count);
	while (*s == c)
		s++;
	while (*s)
	{
		w_len = ft_strclen(s, c);
		full[i++] = ft_strsub(s, 0, w_len);
		s += w_len;
		while (*s && *s == c)
			s++;
	}
	return (full);
}
