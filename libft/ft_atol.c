#include "libft.h"

long ft_atol(const char *str)
{
	int sign;
	long res;

	sign = 1;
	res = 0;
	while (*str < 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
		res = (res * 10) + (*str++ - '0');
	res *= sign;
	return (res);
}