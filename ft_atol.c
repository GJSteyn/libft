#include "libft.h"

long			ft_atol(const char *str)
{
	long	ans;
	int		neg;

	ans = 0;
	neg = 1;
	if (ft_strlen(str) == 0)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	if (!ft_isdigit(*str))
		return (0);
	while (ft_isdigit(*str))
	{
		ans = (ans + (*str - 48)) * 10;
		str++;
	}
	return (ans * neg / 10);
}
