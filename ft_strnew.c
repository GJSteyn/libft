#include "libft.h"
#include <string.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = (char*)malloc(sizeof(char) * size);
	if (!ret)
		return (NULL);
	while (i < size)
	{
		ret[i++] = '\0';
	}
	return (ret);
}
