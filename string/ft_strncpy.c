/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:32:44 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:51:23 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while ((i < len) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (!src[i])
	{
		while (i < len)
			dst[i++] = '\0';
	}
	return (dst);
}
