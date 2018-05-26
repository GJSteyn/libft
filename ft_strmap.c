/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:00:44 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/25 10:21:47 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*ret;

	len = ft_strlen(s);
	ret = ft_memalloc(len + 1);
	if (!ret)
		return (NULL);
	len = 0;
	while (*s)
	{
		ret[len] = (*f)(*s);
		len++;
		s++;
	}
	return (ret);
}
