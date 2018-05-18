/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 09:31:14 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/18 09:34:24 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n)
	{
		if (*s1 == *s2)
		{
			n--;
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}