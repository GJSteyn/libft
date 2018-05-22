/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:19:14 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/22 15:00:51 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		ft_pow(int base, int pow)
{
	while (pow-- > 1)
		base *= base;
	return (base);
}

char	*ft_itoa(int n)
{
	int		i1;
	int		i2;
	char	*ret;

	i1 = 1;
	i2 = 0;
	if (n < 0)
		n *= -1;
	while ((n / i1) > 1)
	{
		i1 *= 10;
		i2++;
	}
	ret = (char*)malloc(i2);
	i2 = 0;
	while (i1 > 1)
	{
		ret[i2] = ((n / i1) - ((n / i1) / ft_pow(10, i2)) + 48);
		i1 /= 10;
		i2++;
	}
	return (ret);
}

int	main(void)
{
	char	*res = ft_itoa(54231);
	printf("%s\n", res);
	free(res);
	printf("%d\n", ft_pow(10, 2));
	return (0);
}
