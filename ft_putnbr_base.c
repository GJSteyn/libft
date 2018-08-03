/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 10:33:42 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/03 10:51:19 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_base(long n, int base)
{
	if (base < 2 || base > 16)
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= (long)base)
	{
		ft_putnbr_base(n / base, base);
		ft_putchar(BASE[n % base]);
	}
	else
		ft_putchar(BASE[n % base]);
}
