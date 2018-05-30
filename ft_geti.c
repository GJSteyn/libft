/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_geti.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:01:50 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/30 11:04:47 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_geti(const char *str, int neg)
{
	long long	ans;

	ans = 0;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (ans / 10);
		if (ans > 2147483647)
			return (-1);
		if ((ans * neg) < -2147483647)
			return (0);
		ans = (ans + (*str - 48)) * 10;
		str++;
	}
	return (ans / 10);
}
