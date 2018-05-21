/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:05:34 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/21 14:09:18 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*ret;

	len = ft_strlen(s);
	ret = (char*)malloc(len);
	len = 0;
	while (*s)
	{
		ret[len] = (*f)(len, s[len]);
		len++;
	}
	return (ret);
}
