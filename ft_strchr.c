/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 06:35:29 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/24 12:08:41 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
