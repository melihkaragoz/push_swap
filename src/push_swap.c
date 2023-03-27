/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:10:06 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/03/27 03:21:03 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_swap stack_a;
	t_swap stack_b;
	ps_init(&stack_a);
	if (ac < 2 || check_duplicate(ps_split_args(av, &stack_a), stack_a.size))
		ps_exit_with_error();
	stack_a.arr = ps_split_args(av, &stack_a);
	if (!stack_a.arr)
		ps_exit_with_error();
	ps_init(&stack_b);
	ps_init_arr_index(&stack_a);
	ps_order_indexes(&stack_a);
	ps_find_max(stack_a.arr, stack_a.size, &stack_a);
	ps_find_min(stack_a.arr, stack_a.size, &stack_a);
	printf("max: %d, min: %d\n", stack_a.max_num, stack_a.min_num);
	return (0);
}
