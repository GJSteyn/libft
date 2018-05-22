/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:17:59 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/22 14:05:46 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	while (len-- && *s)
	{
		ret[i] = *s;
		s++;
	}
	return (ret);
}

int    main()
{
	ft_putstr("Test for ft_strsub\n");
    const char *p = "Im a string";

    printf("The string should return 'string': %s\n", ft_strsub(p, 5, 6));

    ft_putchar('\n');
    return(1);
}
