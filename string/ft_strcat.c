/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:39:48 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/25 09:23:19 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	while (*s2)
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = '\0';
	return (s1);
}
