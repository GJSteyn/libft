/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:02:55 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:52:47 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	char	*ret;

	len = 0;
	if (s)
	{
		while (*s == ' ' || *s == '\t' || *s == '\n')
		{
			s++;
			if (!*s)
				return (ft_strsub(s, 0, ft_strlen(s)));
		}
		len = ft_strlen(s) - 1;
		while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
			len--;
		ret = ft_strsub(s, 0, len + 1);
		return (ret);
	}
	return (NULL);
}
