/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:06:04 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/24 07:32:48 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;
	size_t	i;

	i = 0;
	ret = malloc(size);
	if (ret)
	{
		while (i < size)
			((char*)ret)[i++] = 0;
		return (ret);
	}
	else
	{
		free(ret);
		return (NULL);
	}
}
