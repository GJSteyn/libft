/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:19:14 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/28 12:24:11 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	insert(int i1, int i2, long long n, char **res)
{
	while (i1 > 0)
	{
		(*res)[i2++] = (n / i1) - ((n / i1) / 10 * 10) + 48;
		i1 /= 10;
	}
}

char		*ft_itoa(int n)
{
	int			i1;
	int			i2;
	long long	nn;
	int			pn;
	char		*ret;

	i1 = 1;
	i2 = 0;
	nn = (long long)n;
	pn = 0;
	if (n < 0)
	{
		nn *= -1;
		pn = 1;
	}
	while ((nn / i1) > 10)
	{
		i1 *= 10;
		i2++;
	}
	ret = ft_memalloc(i2 + 1);
	i2 = 0;
	if (pn)
		ret[i2++] = '-';
	insert(i1, i2, nn, &ret);
	return (ret);
}
