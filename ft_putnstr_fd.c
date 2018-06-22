#include "libft.h"

void		ft_putnstr_fd(char *str, int fd, size_t n)
{
	size_t		len;

	if (str)
	{
		len = ft_strlen(str);
		if (len < n)
			write(fd, str, len);
		else
			write(fd, str, n);
	}
}
