/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:57:33 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/03/31 03:10:54 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_is_sorted(t_stack *t)
{
	int	i;

	i = -1;
	while (++i < t->size - 1)
		if (t->array[i] > t->array[i + 1])
			return (0);
	return (1);
}

void	ps_rotate(t_stack *t)
{
	int	*tmp_arr;
	int	tmp;
	int	i;

	i = -1;
	tmp_arr = malloc(sizeof(int) * t->size);
	while (++i < t->size - 1)
		tmp_arr[i] = t->array[i + 1];
	tmp = t->array[0];
	free(t->array);
	t->array = tmp_arr;
	t->array[t->size - 1] = tmp;
	ps_find_max(t);
	ps_find_min(t);
	ps_rotate_sort(t);
}

void	ps_reverse_rotate(t_stack *t)
{
	int	*tmp_arr;
	int	i;

	tmp_arr = malloc(sizeof(int) * t->size);
	tmp_arr[0] = t->array[t->size - 1];
	i = 0;
	while (++i < t->size)
		tmp_arr[i] = t->array[i - 1];
	free(t->array);
	t->array = tmp_arr;
	ps_find_max(t);
	ps_find_min(t);
	ps_reverse_rotate_sort(t);
}

void	ps_rotate_sort(t_stack *t)
{
	int	*tmp_arr;
	int	tmp;
	int	i;

	i = -1;
	tmp_arr = malloc(sizeof(int) * t->size);
	while (++i < t->size - 1)
		tmp_arr[i] = t->arr_index[i + 1];
	tmp = t->arr_index[0];
	free(t->arr_index);
	t->arr_index = tmp_arr;
	t->arr_index[t->size - 1] = tmp;
}

void	ps_reverse_rotate_sort(t_stack *t)
{
	int	*tmp_arr;
	int	i;

	tmp_arr = malloc(sizeof(int) * t->size);
	tmp_arr[0] = t->arr_index[t->size - 1];
	i = 0;
	while (++i < t->size)
		tmp_arr[i] = t->arr_index[i - 1];
	free(t->arr_index);
	t->arr_index = tmp_arr;
}
