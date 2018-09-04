/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:26:27 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:50:07 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*ret;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		i = 0;
		ret = ft_memalloc(len1 + len2 + 1);
		if (!ret)
			return (NULL);
		while (len1--)
		{
			ret[i++] = *s1++;
		}
		while (len2--)
		{
			ret[i++] = *s2++;
		}
		ret[i] = '\0';
		return (ret);
	}
	return (NULL);
}
