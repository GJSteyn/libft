/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 10:39:21 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/25 12:17:51 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstsort(int (*cmp)(void *, void*), t_list *lst, size_t lst_len)
{
	void		*nodes[lst_len];
	t_list		*tmp;
	size_t		i;

	tmp = lst;
	i = 0;
	while (lst)
	{
		nodes[i++] = lst->content;
		lst = lst->next;
	}
	ft_quicksort(cmp, nodes, 0, i - 1);
	i = 0;
	lst = tmp;
	while (lst)
	{
		lst->content = nodes[i++];
		lst = lst->next;
	}
}
