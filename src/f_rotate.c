/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:30:34 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/03/28 23:39:17 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_rotate(t_swap *t_a)
{
	int i;
	int tmp;

	if (t_a->size > 1)
	{
		tmp = t_a->arr[0];
		i = -1;
		while (++i < t_a->size - 1)
			t_a->arr[i] = t_a->arr[i + 1];
		t_a->arr[i] = tmp;
	}
}

void ps_reverse_rotate(t_swap *t_a)
{
	int i;
	int tmp;

	if (t_a->size > 1)
	{
		tmp = t_a->arr[t_a->size - 1];
		i = t_a->size;
		while (--i > 0)
			t_a->arr[i] = t_a->arr[i - 1];
		t_a->arr[i] = tmp;
	}
}
