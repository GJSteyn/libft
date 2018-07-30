/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 13:35:14 by gsteyn            #+#    #+#             */
/*   Updated: 2018/07/30 16:58:29 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Insert:
** Inserts a list item between two existing list items.
*/

void		ft_lstinsert(t_list *dst, t_list *ins)
{
	if (dst && ins)
	{
		ins->next = dst->next;
		dst->next = ins;
	}
}
