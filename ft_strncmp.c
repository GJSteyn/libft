/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 09:31:14 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/24 12:43:53 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return (0);
	if (ft_strlen(s1) == 0)
		return (-1);
	if (ft_strlen(s2) == 0)
		return (1);
	while (*s1 && *s2 && n)
	{
		if (*((unsigned char*)s1) == *((unsigned char*)s2))
		{
			n--;
			s1++;
			s2++;
		}
		else
			return (*((unsigned char*)s1) - *((unsigned char*)s2));
	}
	return (0);
}
