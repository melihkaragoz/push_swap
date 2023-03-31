/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:55:23 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/04/01 00:21:04 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sort_three(t_stack *t)
{
	if (ps_is_sorted(t))
		return ;
	if (t->max_index == 0)
		ps_ra(t);
	else if (t->max_index == 1)
		ps_rra(t);
	if (t->array[0] > t->array[1])
		ps_sa(t);
	ps_find_max(t);
}

void	ps_sort_five(t_stack *t_a, t_stack *t_b)
{
	int i;

	if (ps_is_sorted(t_a))
		return;
	i = -1;
	while (++i < 2)
	{
		if (t_a->max_index <= t_a->size / 2)
			while (t_a->max_index)
				ps_ra(t_a);
		else
			while (t_a->max_index)
				ps_rra(t_a);
		ps_pb(t_a, t_b);
	}
	ps_sort_three(t_a);
	i = -1;
	while (++i < 2)
	{
		ps_pa(t_b, t_a);
		ps_ra(t_a);
	}
}

void	ps_sort_more(t_stack *t_a, t_stack *t_b)
{
	int	maxbit;
	int	i;
	int	j;
	int	size;

	i = 0;
	size = t_a->size;
	maxbit = ps_get_maxbit(t_a);
	while (!ps_is_sorted(t_a) && i < maxbit)
	{
		j = 0;
		while (j < size)
		{
			if (((t_a->arr_index[0] >> i) & 1) == 1)
				ps_ra(t_a);
			else
				ps_pb(t_a, t_b);
			j++;
		}
		while (t_b->size != 0)
			ps_pa(t_b, t_a);
		i++;
	}
}

int	ps_get_maxbit(t_stack *t_a)
{
	int	maxbit;

	maxbit = 0;
	while (t_a->arr_index[t_a->max_index] >> maxbit != 0)
		maxbit++;
	return (maxbit);
}
