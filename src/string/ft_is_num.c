/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 10:04:50 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:44:40 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

int		ft_is_num(char const *s)
{
	if (*s)
	{
		if (*s == '-')
			s++;
		if (!*s)
			return (0);
		while (*s)
		{
			if (!ft_isdigit(*s))
				return (0);
			s++;
		}
		return (1);
	}
	return (1);
}
