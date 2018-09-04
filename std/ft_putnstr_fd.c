/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 10:05:13 by gsteyn            #+#    #+#             */
/*   Updated: 2018/06/26 10:05:14 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnstr_fd(char *str, int fd, size_t n)
{
	size_t		len;

	if (str)
	{
		len = ft_strlen(str);
		if (len < n)
			write(fd, str, len);
		else
			write(fd, str, n);
	}
}
