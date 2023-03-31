/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:01:40 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/04/01 00:11:11 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_pa(t_stack *t_a, t_stack *t_b)
{
	ps_push(t_a, t_b);
	write(1, "pa\n", 3);
}

void	ps_pb(t_stack *t_a, t_stack *t_b)
{
	ps_push(t_a, t_b);
	write(1, "pb\n", 3);
}
