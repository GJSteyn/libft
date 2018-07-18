#include "libft.h"

unsigned int	ft_2pow(int pow)
{
	unsigned int	ret;

	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	ret = 2;
	while (--pow)
		ret *= 2;
	return (ret);
}
