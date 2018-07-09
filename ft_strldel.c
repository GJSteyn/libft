/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 06:43:46 by gsteyn            #+#    #+#             */
/*   Updated: 2018/07/09 14:00:18 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* String list del:
 * Deletes multiple strings (like those created by strplit).
 */

void		ft_strldel(char ***str)
{
	if (*str)
	{
		ft_putstr_fd("Before strldel while loop\n", 2);
		while (**str)
		{
			ft_putstr_fd("inside strldel while loop\n", 2);
			ft_putstr_fd(**str, 2);
			ft_strdel(*str);
			(**str)++;
		}
		*str = NULL;
	}
}
