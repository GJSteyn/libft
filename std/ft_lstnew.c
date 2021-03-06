/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 05:31:17 by gsteyn            #+#    #+#             */
/*   Updated: 2018/06/12 06:52:35 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	else
	{
		if (!content)
		{
			new->content = NULL;
			new->content_size = 0;
			new->next = NULL;
		}
		else if (content_size > 0)
		{
			new->content = malloc(content_size);
			ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
			new->next = NULL;
		}
	}
	return (new);
}
