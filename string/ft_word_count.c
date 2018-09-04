/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:11:24 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:53:15 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

int		ft_word_count(char const *s, char c)
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
