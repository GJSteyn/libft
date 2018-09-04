/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 07:36:43 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:47:37 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	conv;

	i = 0;
	conv = c;
	while (i < len)
	{
		((unsigned char*)b)[i++] = conv;
	}
	return (b);
}
