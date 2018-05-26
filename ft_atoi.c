/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:12:20 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/25 10:04:49 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	long long int	ans;
	int	neg;

	ans = 0;
	neg = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			return ((ans / 10) * neg);
		if (ans > 2147483647)
			return (-1);
		if ((ans * neg) < -2147483647)
			return (0);
		ans += (*str - 48);
		ans *= 10;
		str++;
	}
	return ((long long int)((ans / 10) * neg));
}

int		main(void)
{
	char	s1[] = "123";
	char	s2[] = "-123";
	char	s3[] = "    123";
	char	s4[] = "    -123";
	int		i1;
	int		i2;
	int		i3;
	int		i4;

	i1 = ft_atoi(s1);
	i2 = ft_atoi(s2);
	i3 = ft_atoi(s3);
	i4 = ft_atoi(s4);
	printf("1: %d\n2: %d\n3: %d\n4: %d\n", i1, i2, i3, i4);
	return (0);
}
