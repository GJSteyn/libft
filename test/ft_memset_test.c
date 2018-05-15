/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsteyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 07:36:01 by gsteyn            #+#    #+#             */
/*   Updated: 2018/05/15 08:43:14 by gsteyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	void	*b;
	int		c;
	size_t	len;
	void	*result;

	b = malloc(10);
	c = 5;
	len = 7;
	result = ft_memset(b, c, len);
	write(1, (char*)result, 10);
	
	return (0);
}
