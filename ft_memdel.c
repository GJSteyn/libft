#include "libft.h"
#include <string.h>

void	ft_memdel(void **ap)
{
	if (*ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}
