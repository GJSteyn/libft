/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 05:33:43 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/28 13:58:34 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *hold;

	tmp = *alst->next;
	while (tmp)
	{
		hold = tmp->next;
		(*del)(tmp->content, tmp->content_size);
		tmp = hold;
	}
	(*del)((*alst)->content, (*alst)->content_size);
	*alst = NULL;
}
