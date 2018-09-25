/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <gsteyn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 09:31:40 by gsteyn            #+#    #+#             */
/*   Updated: 2018/09/25 09:36:25 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		swap(void **arr, int i, int j)
{
	void	*tmp;

	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

void			ft_quicksort(int (*cmp)(void*, void*), void **arr, int l, int u)
{
	int		i;
	int		m;

	if (l >= u)
		return ;
	swap(arr, l, (l + u) / 2);
	m = l;
	i = l + 1;
	while (i <= u)
	{
		if (cmp(arr[i], arr[l]) <= 0)
			swap(arr, ++m, i);
		i++;
	}
	swap(arr, l, m);
	ft_quicksort(cmp, arr, l, m - 1);
	ft_quicksort(cmp, arr, m + 1, u);
}
