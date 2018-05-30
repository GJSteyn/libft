/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 08:41:27 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/30 08:00:38 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

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
