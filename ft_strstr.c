/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 07:04:02 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/24 12:17:44 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char*)haystack);
	while (*haystack)
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
	}
	return (NULL);
}
