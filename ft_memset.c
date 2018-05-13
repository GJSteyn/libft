#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		s[i++] = c;
	return (s);
}
