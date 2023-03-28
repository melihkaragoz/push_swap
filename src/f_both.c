/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fboth.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 22:59:15 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/03/28 23:00:25 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ps_rr(t_swap *t_a, t_swap *t_b)
{
	ps_rotate(t_a);
	ps_rotate(t_b);
	ft_putstr_fd("rr\n",1);
}

void ps_rrr(t_swap *t_a, t_swap *t_b)
{
	ps_reverse_rotate(t_a);
	ps_reverse_rotate(t_b);
	ft_putstr_fd("rrr\n",1);
}

void ps_ss(t_swap *t_a, t_swap *t_b)
{
	ps_sa(t_a);
	ps_sb(t_b);
	ft_putstr_fd("ss\n",1);
}
