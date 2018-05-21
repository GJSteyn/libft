/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:26:27 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/21 14:29:37 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*ret;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	ret = (char*)malloc(len1 + len2 + 1);
	while (len1--)
	{
		ret[i++] = *s1++;
	}
	while (len2--)
	{
		ret[i++] = *s2++;
	}
	ret[i] = '\0';
	return (ret);
}
