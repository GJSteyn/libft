/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:31:15 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/25 09:25:05 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		w_len;
	int		w_count;
	int		i;
	char	**full;

	i = 0;
	if (!s)
		return (NULL);
	w_count = ft_word_count(s, c);
	full = (char**)malloc(sizeof(char*) * (w_count + 1));
	if (!full)
		return (NULL);
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
	full[i] = NULL;
	return (full);
}
