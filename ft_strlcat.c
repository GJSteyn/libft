/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:39:46 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/26 15:09:11 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
//{
//	size_t	i;
//	size_t	dst_len;
//	size_t	app;
//
//	i = 0;
//	dst_len = ft_strlen(dst);
//	app = dstsize - dst_len - 1;
//	while (i < app)
//	{
//		dst[dst_len + i] = src[i];
//		i++;
//	}
//	if (!(dstsize == 0 || dst_len > dstsize))
//		dst[dst_len + i] = '\0';
//	return (dst_len + i);
//}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	total_len;

	i = 0;
	dst_len = ft_strlen(dst);
	total_len = dst_len + ft_strlen(src);
	
	while (i < dstsize - dst_len)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (total_len);
}
