/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 13:33:56 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/25 04:50:37 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstappend(t_list **dst, void *content, size_t content_size)
{
	t_list		*tmp;
	t_list		*ins;

	ins = ft_lstnew(content, content_size);
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
