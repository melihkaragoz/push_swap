#include "push_swap.h"

int *ps_split_args(char **av, t_swap *t_a)
{
	int *nums;
	char **tmp;
	int len;
	int j;
	int k;

	j = -1;
	k = 0;
	t_a->i = 0;
	len = ps_count_numbers(av);
	if (len == -1)
		return (0);
	t_a->size = len;
	nums = malloc(sizeof(int *) * (len + 1));
	while (av[++(t_a->i)])
	{
		tmp = ft_split(av[t_a->i], ' ');
		while (tmp[++j])
			nums[k++] = ft_atoi(tmp[j]);
		ps_free(tmp);
		j = -1;
	}
	nums[k] = 0;
	return (nums);
}

void ps_order_indexes(t_swap *t)
{
	int i;
	int j;

	i = -1; // 0
	j = 0;	// 1

	while (++i < t->size)
	{
		while (++j < t->size)
		{
			if (t->arr[i] > t->arr[j])
				t->arr_index[i]++;
			else if (t->arr[i] < t->arr[j])
				t->arr_index[j]++;
		}
		j = -1;
	}
	i = -1;
	while (++i < t->size)
		if (t->arr_index[i] != 0)
			t->arr_index[i] /= 2;
}

int check_duplicate(int *arr, int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size)
	{
		j = i + 1;
		while (j < size)
			if (arr[i] == arr[j++])
				return (1);
	}
	free(arr);
	return (0);
}

void ps_init_arr_index(t_swap *t_a)
{
	t_a->arr_index = calloc(t_a->size, sizeof(int));
}

void ps_print_arr(int *arr, int size)
{
	int i;

	i = 0;
	while (i < size)
		printf("%d\n", arr[i++]);
}

void ps_free(char **s)
{
	int i;

	i = -1;
	while (s[i++])
		free(s[i]);
}

int ps_count_numbers(char **av)
{
	int i;
	int j;
	int len;
	char **tmp;

	i = 0;
	j = 0;
	len = 0;
	while (av[++i])
	{
		tmp = ft_split(av[i], ' ');
		while (tmp[j])
		{
			if (!ps_is_num(tmp[j++]))
				return (-1);
			len++;
		}
		ps_free(tmp);
		j = 0;
	}
	return (len);
}

void ps_init(t_swap *t_a)
{
	t_a->i = 0;
	t_a->size = 0;
}

int ps_is_num(char *s)
{
	int i;

	i = -1;
	if (!s)
		return (0);
	while (s[++i])
		if (!ft_isdigit(s[i]))
			return (0);
	return (1);
}

void ps_exit_with_error()
{
	write(2, "Error\n", 6);
	exit(1);
}
