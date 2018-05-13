#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ret;

	if (size == 0)
		return (NULL);
	ret = malloc(size);
	return (ret);
}
