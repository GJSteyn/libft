/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:19:14 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/23 08:09:21 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	insert(int i1, int i2, int n, char	**res)
{
	while (i1 > 0)
	{
		(*res)[i2++] = (n / i1) - ((n / i1) / 10 * 10) + 48;
		i1 /= 10;
	}
}

char		*ft_itoa(int n)
{
	int		i1;
	int		i2;
	int		pn;
	char	*ret;

	i1 = 1;
	i2 = 0;
	pn = 0;
	if (n < 0)
	{
		n *= -1;
		pn = 1;
	}
	while ((n / i1) > 10)
	{
		i1 *= 10;
		i2++;
	}
	ret = (char*)malloc(i2 + pn);
	i2 = 0;
	if (pn)
		ret[i2++] = '-';
	insert(i1, i2, n, &ret);
	return (ret);
}
