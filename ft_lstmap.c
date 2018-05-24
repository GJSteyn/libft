/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.wethinkcode.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 16:38:34 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/24 16:56:38 by gsteyn           ###   ########.fr       */
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
