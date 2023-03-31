/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 03:13:35 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/04/01 00:09:55 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_swap(t_stack *t)
{
	int tmp;

	tmp = t->array[0];
	t->array[0] = t->array[1];
	t->array[1] = tmp;
	ps_find_max(t);
	ps_find_min(t);
	ps_swap_sort(t);
}

void ps_swap_sort(t_stack *t)
{
	int tmp;

	tmp = t->arr_index[0];
	t->arr_index[0] = t->arr_index[1];
	t->arr_index[1] = tmp;
}

void ps_push(t_stack *t_a, t_stack *t_b)
{
	int i;

	t_b->size++;
	ps_reverse_rotate(t_b);
	t_b->array[0] = t_a->array[0];
	i = -1;
	while (++i < t_a->size)
		t_a->array[i] = t_a->array[i + 1];
	t_a->size--;
	ps_find_max(t_a);
	ps_find_max(t_b);
	ps_find_min(t_a);
	ps_find_min(t_b);
	ps_push_sort(t_a, t_b);
}

void ps_push_sort(t_stack *t_a, t_stack *t_b)
{
	int i;

	t_b->arr_index[0] = t_a->arr_index[0];
	i = -1;
	while (++i < t_a->size)
		t_a->arr_index[i] = t_a->arr_index[i + 1];
}
