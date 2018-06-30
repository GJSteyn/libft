#include "libft.h"

int		ft_only_digits(char const *s)
{
	while (*s)
	{
		if (!ft_isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}
