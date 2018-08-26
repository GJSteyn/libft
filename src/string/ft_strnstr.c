/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 08:41:27 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:51:59 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (haystack[i2] && i2 < len && i + i2 != len)
	{
		if (needle[i] == haystack[i + i2] && !needle[i + 1])
			return ((char*)(haystack + i2));
		else if (needle[i] == haystack[i2 + i])
			i++;
		else
		{
			i = 0;
			i2++;
		}
	}
	return (NULL);
}
