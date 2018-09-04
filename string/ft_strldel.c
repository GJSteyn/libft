/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 06:43:46 by gsteyn            #+#    #+#             */
/*   Updated: 2018/08/26 13:50:29 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

void		ft_strldel(char ***str)
{
	int		i;

	i = 0;
	if (*str)
	{
		while ((*str)[i])
			free((*str)[i++]);
		free(*str);
		*str = NULL;
	}
}
