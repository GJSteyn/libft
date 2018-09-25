/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 08:49:00 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/25 10:54:30 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t		len1;
	size_t		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len1 == 0 && len2 == 0)
		return (0);
	if (len1 == 0)
		return (-1);
	if (len2 == 0)
		return (1);
	if (len1 > len2)
		len2 = len1;
	while (len2--)
	{
		if (*((unsigned char*)s1) == *((unsigned char*)s2))
		{
			s1++;
			s2++;
		}
		else
			return (*((unsigned char*)s1) - *((unsigned char*)s2));
	}
	return (0);
}
