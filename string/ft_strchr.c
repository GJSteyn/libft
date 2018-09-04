/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 06:35:29 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:48:21 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	if (c == '\0')
		return ((char*)(s + s_len));
	while (i <= s_len)
	{
		if (s[i] == c)
			return ((char*)(s + i));
		i++;
	}
	return (NULL);
}
