#include "libft.h"

void		ft_putnstr(char *str, size_t n)
{
	size_t		len;

	if (str)
	{
		len = ft_strlen(str);
		if (len < n)
			write(1, str, len);
		else
			write(1, str, n);
	}
}
