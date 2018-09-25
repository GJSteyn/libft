/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:15:37 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/25 09:22:05 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
	{
		*((char*)s) = '\0';
		s++;
	}
}
