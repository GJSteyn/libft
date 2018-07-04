#include "libft.h"

int		ft_lstlen(t_list *lst)
{
	int		i;

	i = 0;
	if (lst)
	{
		while (lst)
		{
			i++;
			lst = lst->next;
		}
	}
	return (i);
}
