/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:00:44 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:50:47 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		while (*s)
		{
			ret[len] = (*f)(*s);
			len++;
			s++;
		}
		return (ret);
	}
	return (NULL);
}
