/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 17:03:54 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/16 17:18:18 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	cc;
	size_t			i;

	cc = (unsigned char)c;
	i = 0;
	while (i <= n)
	{
		((unsigned char*)src)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == cc)
			return (dst);
		i++;
	}
	return (dst);
}
