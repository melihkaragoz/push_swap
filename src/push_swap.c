#include "push_swap.h"

int main(int ac, char **av)
{
	t_swap stack_a;
	if (ac < 2 || check_duplicate(ps_split_args(av, &stack_a), stack_a.size))
		ps_exit_with_error();
	stack_a.arr = ps_split_args(av, &stack_a);
	if (!stack_a.arr)
		ps_exit_with_error();
	ps_init_arr_index(&stack_a);
	ps_print_arr(stack_a.arr_index, stack_a.size);
	printf("----\n");
	ps_order_indexes(&stack_a);
	ps_print_arr(stack_a.arr_index, stack_a.size);
	return (0);
}
