/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:13:31 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/04/01 02:23:36 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ps_control_av(char **av)
{
	char **strs;
	int i;
	int len;

	i = 0;
	len = 0;
	while (av[++i])
	{
		strs = ft_split(av[i], ' ');
		len += ps_len(strs);
		ps_free(strs);
	}
	return (len);
}

void ps_find_max(t_stack *t)
{
	int i;
	int highest;

	i = 0;
	highest = t->array[0];
	t->max_index = 0;
	while (++i < t->size)
	{
		if (highest < t->array[i])
		{
			highest = t->array[i];
			t->max_index = i;
		}
	}
}

void ps_find_min(t_stack *t)
{
	int i;
	int smallest;

	i = 0;
	smallest = t->array[0];
	t->min_index = 0;
	while (++i < t->size)
	{
		if (smallest > t->array[i])
		{
			smallest = t->array[i];
			t->min_index = i;
		}
	}
}

int ps_check_duplicate(t_stack *t)
{
	int i;
	int j;

	i = -1;
	while (++i < t->size - 1)
	{
		j = i;
		while (++j < t->size)
			if (t->array[i] == t->array[j])
				ps_exit();
	}
	return (1);
}

void ps_init_index_arr(t_stack *t)
{
	int i;
	int size;

	size = t->size;
	i = -1;
	while (++i < size)
		t->arr_index[i] = 0;
	ps_init_index(t);
}

void ps_init_index(t_stack *t)
{
	int size;
	int i;
	int j;

	size = t->size;
	i = 0;
	while (t->arr_index[i] != size - 1)
	{
		j = i + 1;
		ps_init_index_list(t, j, i, size);
		i++;
		if (i >= size)
			i = 0;
	}
}

void ps_init_index_list(t_stack *t, int j, int i, int size)
{
	while (j < size)
	{
		if (t->arr_index[i] == t->arr_index[j])
		{
			if (t->array[i] > t->array[j])
			{
				t->arr_index[i] += 1;
				break;
			}
			else if (t->array[i] < t->array[j])
			{
				t->arr_index[j] += 1;
				break;
			}
		}
		j++;
	}
}

void	ps_print_str_arr(char **s)
{
	int	i;

	i = -1;
	while (s[++i])
		printf("%s\n",s[i]);
}

void ps_exit()
{
	write(2, "Error\n", 6);
	exit(0);
}
