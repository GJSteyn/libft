/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:12:20 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/24 17:11:24 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	ans;
	int	neg;

	ans = 0;
	neg = 1;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	while (*str)
	{
		ans += *str - 48;
		ans *= 10;
		str++;
	}
	return ((ans / 10) * neg);
}

int	main(void)
{
	char	a[] = "-12345";
	int	ret;

	ret = ft_atoi(a);
	printf("%d\n", ret);
	return (0);
}
