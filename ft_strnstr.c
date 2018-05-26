/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 08:41:27 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/25 05:32:35 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (*haystack && len)
	{
		if (needle[i] == haystack[i] && !needle[i + 1])
			return ((char*)haystack);
		else if (needle[i] == haystack[i])
			i++;
		else
		{
			i = 0;
			haystack++;
		}
		len--;
	}
	return (NULL);
}
