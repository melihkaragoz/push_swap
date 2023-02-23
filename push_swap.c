#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

int	main(int ac, char **av)
{
	int	len;
	int	*a;
	int	i;
	int	j;

	i = 1;
	j = 0;
	len = ac - 1;
	t_list t1;
	t1.a = malloc(len * sizeof(int));
	if (!checkError(av))
	{
		printf("Error.\n");
		return (0);
	}
	while (av[i])
	{
		if (!is_duplicate(t1.a, ft_atol(av[i]), t1.len))
		{
			t1.a[j++] = ft_atol(av[i]);
			t1.len++;
		}
		else
		{
			printf("Error\n");
			return (0);
		}
		i++;
	}
}
