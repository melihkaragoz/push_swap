/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_swap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:06:51 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/03/28 23:07:54 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_sa(t_swap *t_a)
{
	int tmp;

	if (t_a->size > 1)
	{
		tmp = t_a->arr[0];
		t_a->arr[0] = t_a->arr[1];
		t_a->arr[1] = tmp;
	}
	ft_putstr_fd("sa\n",1);
}

void ps_sb(t_swap *t_b)
{
	int tmp;

	if (t_b->size > 1)
	{
		tmp = t_b->arr[0];
		t_b->arr[0] = t_b->arr[1];
		t_b->arr[1] = tmp;
	}
	ft_putstr_fd("sb\n",1);
}
