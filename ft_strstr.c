/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 07:04:02 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/18 08:22:34 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	while (*haystack)
	{
		if (needle[i] == haystack[i])
			i++;
		else if (!(needle[i]))
			return ((char*)haystack);
		else
		{
			i = 0;
			haystack++;
		}
	}
	return (NULL);
}
