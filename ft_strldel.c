/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 06:43:46 by gsteyn            #+#    #+#             */
/*   Updated: 2018/07/09 17:36:23 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* String list del:
 * Deletes multiple strings (like those created by strplit).
 */

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
