/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 03:01:12 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/04/01 00:05:30 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_ra(t_stack *t)
{
	ps_rotate(t);
	write(1, "ra\n", 3);
}

void	ps_rra(t_stack *t)
{
	ps_reverse_rotate(t);
	write(1, "rra\n", 4);
}
