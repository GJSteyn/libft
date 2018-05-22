/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:19:14 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/22 19:32:23 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
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
	ret = (char*)malloc(i2);
	i2 = 0;
	if (pn)
		ret[i2++] = '-';
	while (i1 > 0)
	{
		ret[i2] = (n / i1) - ((n / i1) / 10 * 10) + 48;
		i1 /= 10;
		i2++;
	}
	return (ret);
}

int	main(void)
{
	char	*res = ft_itoa(-52342);
	printf("%s\n", res);
	free(res);
	return (0);
}
