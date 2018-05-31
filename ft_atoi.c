/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:12:20 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/31 06:31:13 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	long long		ans;
	int				neg;

	ans = 0;
	neg = 1;
	if (ft_strlen(str) == 0)
		return (0);
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
