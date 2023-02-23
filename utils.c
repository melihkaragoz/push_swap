#include "push_swap.h"

int is_digit(int c)
{
	return (c >= '0' && c <= '9');
}

int is_num(char *s)
{
	int i;
	i = 0;
	while (s[i])
	{
		if (!is_digit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

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
	while (is_digit(*str))
		res = (res * 10) + (*str++ - '0');
	res *= sign;
	return (res);
}

int is_duplicate(int *arr, int n, int size)
{
	int i;

	i = 0;
	if (size == 0)
		size = 1;
	while (i < size)
	{
		if (arr[i++] == n)
			return (1);
	}
	return (0);
}

int checkOrder(int *arr, int size)
{
	int i;

	i = 1;
	while (i < size)
	{
		if (arr[i] > arr[i - 1])
			i++;
		else
			return (0);
	}
	return (1);
}

int checkError(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (!is_num(av[i]))
			return (0);
		else if (ft_atol(av[i]) > INT_MAX || ft_atol(av[i]) < INT_MIN)
			return (0);
		i++;
	}
}

int	addNewItem(t_list *t, int num)
{
	t->a[t->len-1] = num;
	t->len++;
	return (1);
}
