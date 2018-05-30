/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:12:20 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/30 07:29:56 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_geti(const char *str, int neg)
{
	long long	ans;

	ans = 0;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return ((ans / 10) * neg);
		if (ans > 2147483647)
			return (-1);
		if ((ans * neg) < -2147483647)
			return (0);
		ans = (ans + (*str - 48)) * 10;
		str++;
	}
	return (ans / 10);
}

int			ft_atoi(const char *str)
{
	long long		ans;
	int				neg;

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
	else if (*str == '+')
		str++;
	ans = ft_geti(str, neg);
	return ((long long)((ans) * neg));
}
