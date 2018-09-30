/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 11:56:52 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/30 12:01:17 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

char		ft_lastchar(char *str)
{
	if (!str)
		return (0);
	if (!str[0])
		return (0);
	while (*(str + 1))
		str++;
	return (*str);
}
