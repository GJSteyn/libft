/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 09:31:14 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:51:15 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		len;

	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return (0);
	if (ft_strlen(s1) == 0)
		return (-1);
	if (ft_strlen(s2) == 0)
		return (1);
	if (ft_strlen(s1) >= ft_strlen(s2))
		len = ft_strlen(s1);
	else
		len = ft_strlen(s2);
	while (len && n)
	{
		if (*((unsigned char*)s1) == *((unsigned char*)s2))
		{
			n--;
			len--;
			s1++;
			s2++;
		}
		else
			return (*((unsigned char*)s1) - *((unsigned char*)s2));
	}
	return (0);
}
