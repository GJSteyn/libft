/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:02:55 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/23 13:15:18 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t	len;
	char	*ret;

	len = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	len = ft_strlen(s) - 1;
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
		len--;
	ret = ft_strsub(s, 0, len + 1);
	return (ret);
}

int		main(void)
{
	char	str[] = "    Somewhere over the rainbow.    ";
	char	*res;

	res = ft_strtrim(str);
	printf("%s\n", res);
	free(res);
	return (0);
}
