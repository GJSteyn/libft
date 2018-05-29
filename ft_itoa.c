/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 06:29:47 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/29 13:02:41 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_intlen(long c)
{
	int		i;

	if (c == 0)
		return (1);
	i = 0;
	while (c > 0)
	{
		c /= 10;
		i++;
	}
	return (i);
}

static void		ft_insert(char **s, int index, long c)
{
	if (c < 0)
	{
		(*s)[0] = '-';
		c *= -1;
	}
	if (c > 0)
	{
		(*s)[index - 1] = (c % 10) + 48;
		c /= 10;
		index--;
		ft_insert(s, index, c);
	}
}

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
