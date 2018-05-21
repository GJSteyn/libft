/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:29:48 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/21 14:50:32 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	i1;
	size_t	i2;
	char	*ret;

	len = ft_strlen(s);
	i = 0;
	while (s[i1] == ' ' || s[i1] == '\t' || s[i1] == '\n')
		i1++;
	i2 = i1;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
	{
		i1++;
		len--;
	}
	ret = (char*)malloc(i);
	ret = ft_strsub(s, i2, (len - i2));
	return (ret);
}
