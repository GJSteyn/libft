#include "libft.h"

size_t		ft_2pow(int pow)
{
	size_t		ret;

	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	ret = 2;
	while (--pow)
		ret *= 2;
	return (ret);
}
