/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 05:48:06 by gsteyn            #+#    #+#             */
/*   Updated: 2018/07/20 05:48:07 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_bits(void *mem, size_t size)
{
	unsigned char	c;
	unsigned char	*conv;

	conv = (unsigned char*)mem;
	while (size > 0)
	{
		c = 128;
		while (c > 0)
		{
			if (*conv & c)
				ft_putchar('1');
			else
				ft_putchar('0');
			c >>= 1;
		}
		if (size != 1)
			ft_putchar(' ');
		size--;
		conv++;
	}
	ft_putchar('\n');
}
