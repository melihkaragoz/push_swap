/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:40:08 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/04/01 02:23:15 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack stack_a;
	t_stack stack_b;

	if (!ps_check(ac, av))
		return (0);
	if (!ps_check_ac(&stack_a, &stack_b, ac, av))
		return (0);
	if (stack_a.size <= 3)
		ps_sort_three(&stack_a);
	else if (stack_a.size > 3 && stack_a.size < 6)
		ps_sort_five(&stack_a, &stack_b);
	else if (stack_a.size > 5)
		ps_sort_more(&stack_a, &stack_b);
	return (0);
}
