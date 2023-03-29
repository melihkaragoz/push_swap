/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_utils.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:23:21 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/03/29 00:35:35 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_ra(t_swap *t_a)
{
	ps_rotate(t_a);
	ft_putstr_fd("ra\n",1);
}

void ps_rb(t_swap *t_b)
{
	ps_rotate(t_b);
	ft_putstr_fd("rb\n",1);
}

 void ps_rra(t_swap *t_a)
{
	ps_reverse_rotate(t_a);
	ft_putstr_fd("rra\n",1);
}

void ps_rrb(t_swap *t_b)
{
	ps_reverse_rotate(t_b);
	ft_putstr_fd("rrb\n",1);
}

