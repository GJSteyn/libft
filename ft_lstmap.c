/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 05:31:04 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/29 14:04:51 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*it;
	t_list	*ret;

	if (!lst)
		return (NULL);
	it = (*f)(lst);
	if (!it)
		return (NULL);
	ret = it;
	while (lst)
	{
		lst = lst->next;
		it->next = (*f)(lst);
		if (!(it->next))
			return (NULL);
		it = it->next;
	}
	return (ret);
}
