/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:37:54 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/22 09:03:52 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = (char*)malloc(size);
	if (!ret)
		return (NULL);
	while (i < size)
	{
		ret[i++] = '\0';
	}
	return (ret);
}
