/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 12:12:20 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/18 12:32:14 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	ans;

	ans = 0;
	while (*str)
	{
		ans += *str - 48;
		ans *= 10;
		str++;
	}
	return (ans/10);
}
