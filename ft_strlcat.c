/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:39:46 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/24 11:58:13 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	app;

	i = 0;
	dst_len = ft_strlen(dst);
	app = dstsize - dst_len - 1;
	while (i < app)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (!(dstsize == 0 || dst_len > dstsize))
		dst[dst_len + i] = '\0';
	return (i);
}
