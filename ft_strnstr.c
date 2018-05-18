/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 08:41:27 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/18 08:44:35 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (*haystack && len)
	{
		if (needle[i] == haystack[i])
			i++;
		else if (!needle[i])
			return ((char*)haystack);
		else
		{
			i = 0;
			haystack++;
		}
		len--;
	}
}
