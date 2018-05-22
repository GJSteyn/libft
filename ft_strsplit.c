/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:50:44 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/22 13:13:15 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		*word_count(char const *s, char c)
{
	int		i;
	char	*in;

	i = 0;
	while (*in)
	{
		if (*in && *in != c)
		{
			i++;
			while (*in && *in != c)
				in++;
		}
		if (*in && *in == c)
		{
			while (*in && *in != c)
				in++;
		}
	}
	return (i);
}

static int		strclen(char const *s, char c)
{
	int		i;

	while (s[i] != c && s[i])
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	int		word_len;
	int		count;
	char	*trim;
	char	*one;
	char	**full;

	trim = ft_strtrim(s);
	count = count(trim);
	full = (char**)malloc(sizeof(char*) * count);
	count = 0;
	while (*trim)
	{
		word_len = strclen(trim, c);
		one = ft_strsub(trim, 0, word_len);
		full[count++] = one;
		trim += word_len;
		while (*trim && *trim == c)
			*trim++;
		free(one);
	}
	return (full);
}
