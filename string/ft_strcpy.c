/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:04:10 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/25 09:25:32 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	size_t	i1;

	i = ft_strlen(src);
	i1 = 0;
	while (i1 <= i)
	{
		dst[i1] = src[i1];
		i1++;
	}
	return (dst);
}
