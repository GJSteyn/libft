#include "libft.h"

void		ft_putnstr_fd(char *str, int fd, size_t n)
{
	size_t		i;
	size_t		len;

	if (str)
	{
		i = 0;
		len = ft_strlen(str);
		if (len < n)
			write(fd, str, len);
		else
			write(fd, str, n);
	}
}
