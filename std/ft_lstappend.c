/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 13:33:56 by gsteyn            #+#    #+#             */
/*   Updated: 2018/07/30 16:57:55 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Append:
** Appends a list item to the end of a list.
*/

void		ft_lstappend(t_list **dst, t_list *ins)
{
	t_list		*tmp;

	if (!(*dst) && ins)
		*dst = ins;
	else if (*dst && ins)
	{
		tmp = *dst;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ins;
	}
}
