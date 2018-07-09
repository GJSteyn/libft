/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 06:43:46 by gsteyn            #+#    #+#             */
/*   Updated: 2018/07/09 06:52:28 by gsteyn           ###   ########.fr       */
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
		while (**str)
		{
			ft_strdel(*str);
			(**str)++;
		}
		**str = NULL;
	}
}
