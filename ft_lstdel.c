/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 05:33:43 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/29 13:35:39 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *hold;

	if (alst && *alst)
	{
		tmp = (*alst)->next;
		while (tmp)
		{
			hold = tmp->next;
			(*del)(tmp->content, tmp->content_size);
			free(tmp);
			tmp = hold;
		}
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
