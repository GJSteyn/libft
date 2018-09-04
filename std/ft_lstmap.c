/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 05:31:04 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/30 06:55:06 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*it;
	t_list	*ret;

	if (!lst || !f)
		return (NULL);
	it = (*f)(lst);
	if (!it)
		return (NULL);
	ret = it;
	while (lst->next)
	{
		lst = lst->next;
		it->next = (*f)(lst);
		it = it->next;
	}
	return (ret);
}
