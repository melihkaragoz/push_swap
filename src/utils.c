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

void ps_sort_arr_index(t_swap *t)
{
	int i;
	int j;
	int tmp;

	i = -1;
	while (++i < t->size)
	{
		j = i + 1;
		while (j < t->size)
		{
			if (t->arr_index[i] > t->arr_index[j])
			{
				tmp = t->arr_index[i];
				t->arr_index[i] = t->arr_index[j];
				t->arr_index[j] = tmp;
			}
			j++;
		}
	}
}

void ps_order_indexes(t_swap *t)
{
	int i;
	int j;

	i = -1;
	j = 0;

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
	t_a->max_num = 0;
	t_a->max_index = 0;
	t_a->min_num = 0;
	t_a->min_index = 0; // stack_a'yi init etme cunku index=0'lar isi bozuyor.
}

int ps_is_num(char *s)
{
	int i;

	i = -1;
	if (!s)
		return (0);
	if (s[0] == '-')
		i++;
	while (s[++i])
		if (!ft_isdigit(s[i]))
			return (0);
	return (1);
}

void ps_find_max(int *arr, int size, t_swap *t_a)
{
	int i;

	i = 0;
	t_a->max_num = arr[0];
	while (i < size)
	{
		if (t_a->max_num < arr[i])
		{
			t_a->max_num = arr[i];
			t_a->max_index = i;
		}
		i++;
	}
}

void  ps_push(t_swap *t_a, t_swap *t_b, char *str)
{
	if (str[0] == 'p')
	{
		if (str[1] == 'a')
			ps_push_a(t_a, t_b);
		else if (str[1] == 'b')
			ps_push_b(t_a, t_b);
	}
}


void	ps_swap(t_swap *t_a, t_swap *t_b, char *str)
{
	if (str[0] == 's')
	{
		if (str[1] == 'a')
			ps_swap_a(t_a);
		else if (str[1] == 'b')
			ps_swap_b(t_b);
		else if (str[1] == 's')
		{
			ps_swap_a(t_a);
			ps_swap_b(t_b);
		}
	}
	else if (str[0] == 'p')
	{
		if (str[1] == 'a')
			ps_push_a(t_a, t_b);
		else if (str[1] == 'b')
			ps_push_b(t_a, t_b);
	}
	else if (str[0] == 'r')
	{
		if (str[1] == 'a')
			ps_rotate_a(t_a);
		else if (str[1] == 'b')
			ps_rotate_b(t_b);
		else if (str[1] == 'r')
		{
			ps_rotate_a(t_a);
			ps_rotate_b(t_b);
		}
	}
	else if (str[0] == 'r' && str[1] == 'r')
	{
		if (str[2] == 'a')
			ps_reverse_rotate_a(t_a);
		else if (str[2] == 'b')
			ps_reverse_rotate_b(t_b);
		else if (str[2] == 'r')
		{
			ps_reverse_rotate_a(t_a);
			ps_reverse_rotate_b(t_b);
		}
	}
}

void	ps_swap_a(t_swap *t_a)
{
	int tmp;

	if (t_a->size > 1)
	{
		tmp = t_a->arr[0];
		t_a->arr[0] = t_a->arr[1];
		t_a->arr[1] = tmp;
	}
}

void	ps_swap_b(t_swap *t_b)
{
	int tmp;

	if (t_b->size > 1)
	{
		tmp = t_b->arr[0];
		t_b->arr[0] = t_b->arr[1];
		t_b->arr[1] = tmp;
	}
}

void	ps_push_a(t_swap *t_a, t_swap *t_b)
{
	int i;

	if (t_b->size > 0)
	{
		i = t_a->size;
		while (i > 0)
		{
			t_a->arr[i] = t_a->arr[i - 1];
			i--;
		}
		t_a->arr[0] = t_b->arr[0];
		i = 0;
		while (i < t_b->size - 1)
		{
			t_b->arr[i] = t_b->arr[i + 1];
			i++;
		}
		t_b->arr[i] = 0;
		t_a->size++;
		t_b->size--;
	}
}

void	ps_push_b(t_swap *t_a, t_swap *t_b)
{
	int i;

	if (t_a->size > 0)
	{
		i = t_b->size;
		while (i > 0)
		{
			t_b->arr[i] = t_b->arr[i - 1];
			i--;
		}
		t_b->arr[0] = t_a->arr[0];
		i = 0;
		while (i < t_a->size - 1)
		{
			t_a->arr[i] = t_a->arr[i + 1];
			i++;
		}
		t_a->arr[i] = 0;
		t_b->size++;
		t_a->size--;
	}
}

void	ps_rotate_a(t_swap *t_a)
{
	int i;
	int tmp;

	if (t_a->size > 1)
	{
		i = 0;
		tmp = t_a->arr[0];
		while (i < t_a->size - 1)
		{
			t_a->arr[i] = t_a->arr[i + 1];
			i++;
		}
		t_a->arr[i] = tmp;
	}
}

void	ps_rotate_b(t_swap *t_b)
{
	int i;
	int tmp;

	if (t_b->size > 1)
	{
		i = 0;
		tmp = t_b->arr[0];
		while (i < t_b->size - 1)
		{
			t_b->arr[i] = t_b->arr[i + 1];
			i++;
		}
		t_b->arr[i] = tmp;
	}
}

void	ps_reverse_rotate_a(t_swap *t_a)
{
	int i;
	int tmp;

	if (t_a->size > 1)
	{
		i = t_a->size - 1;
		tmp = t_a->arr[i];
		while (i > 0)
		{
			t_a->arr[i] = t_a->arr[i - 1];
			i--;
		}
		t_a->arr[i] = tmp;
	}
}

void	ps_reverse_rotate_b(t_swap *t_b)
{
	int i;
	int tmp;

	if (t_b->size > 1)
	{
		i = t_b->size - 1;
		tmp = t_b->arr[i];
		while (i > 0)
		{
			t_b->arr[i] = t_b->arr[i - 1];
			i--;
		}
		t_b->arr[i] = tmp;
	}
}


void ps_find_min(int *arr, int size, t_swap *t_a)
{
	int i;

	i = 0;
	t_a->min_num = arr[0];
	while (i < size)
	{
		if (t_a->min_num > arr[i])
		{
			t_a->min_num = arr[i];
			t_a->min_index = i;
		}
		i++;
	}
}

void ps_exit_with_error()
{
	write(2, "Error\n", 6);
	exit(1);
}
