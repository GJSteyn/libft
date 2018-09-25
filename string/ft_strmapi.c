/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:05:34 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/25 09:25:55 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*ret;

	if (s)
	{
		len = ft_strlen(s);
		ret = ft_memalloc(len + 1);
		if (!ret)
			return (NULL);
		len = 0;
		while (s[len])
		{
			ret[len] = (*f)(len, s[len]);
			len++;
		}
		return (ret);
	}
	return (NULL);
}
