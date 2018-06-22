#include "libft.h"

void		ft_putnstr(char *str, size_t n)
{
	size_t		i;
	size_t		len;

	if (str)
	{
		i = 0;
		len = ft_strlen(str);
		if (len < n)
			write(1, str, len);
		else
			write(1, str, n);
	}
}
