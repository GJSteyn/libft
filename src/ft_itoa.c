/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 06:29:47 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/30 10:03:29 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int c)
{
	char	*ret;
	int		len;
	long	cc;

	cc = (long)c;
	if (cc < 0)
	{
		len = ft_intlen(-cc);
		len += 1;
	}
	else
		len = ft_intlen(cc);
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	if (cc == 0)
	{
		ret[0] = '0';
		return (ret);
	}
	ft_insert(&ret, len, cc);
	return (ret);
}
