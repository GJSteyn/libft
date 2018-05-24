/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 13:58:32 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/24 09:29:05 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	i = 0;
	if (dstsize == 0 || ft_strlen(src) == 0)
		return (0);
	while ((i < (dstsize - (dst_len - 1))) && dst[dst_len + i] && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	return (ft_strlen(dst));
}
