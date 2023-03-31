/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:07:02 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/04/01 02:18:56 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ps_check_ac(t_stack *stack_a, t_stack *stack_b, int ac, char **av)
{
	stack_b->size = 0;
	if (ac == 2)
	{
		if (!ps_prepare_single(stack_a, stack_b, av))
			return (0);
	}
	else if (ac > 2)
	{
		if (!ps_prepare_multi(stack_a, stack_b, av))
			return (0);
	}
	return (1);
}

int ps_prepare_single(t_stack *t_a, t_stack *t_b, char **av)
{
	char **str;

	str = ps_init_av(av);
	ps_init_a(t_a, ps_len(str), str);
	t_b->array = malloc(sizeof(int) * ps_len(str));
	t_b->arr_index = malloc(sizeof(int) * ps_len(str));
	ps_free(str);
	if (!ps_check_duplicate(t_a))
		return (0);
	ps_init_index_arr(t_a);
	return (1);
}

int ps_prepare_multi(t_stack *t_a, t_stack *t_b, char **av)
{
	char **strs;

	strs = ps_init_av(av);
	if (!ps_check_num(strs))
		return (0);
	ps_init_a(t_a, ps_control_av(av), strs);
	t_b->array = malloc(sizeof(int) * ps_len(strs));
	t_b->arr_index = malloc(sizeof(int) * ps_len(strs));
	ps_free(strs);
	if (!ps_check_duplicate(t_a))
		return (0);
	ps_init_index_arr(t_a);
	return (1);
}

char **ps_init_av(char **av)
{
	char **strs;
	char **tmp;
	int i;
	int j;
	int k;

	strs = malloc(sizeof(char *) * (ps_control_av(av) + 1));
	i = 0;
	j = 0;
	k = -1;
	while (av[++i])
	{
		tmp = ft_split(av[i], ' ');
		j = -1;
		while (tmp[++j])
			strs[++k] = tmp[j];
		free(tmp);
	}
	strs[k+1] = 0;
	return (strs);
}

void ps_init_a(t_stack *t, int size, char **av)
{
	int i;

	t->array = malloc(sizeof(int) * size);
	t->arr_index = malloc(sizeof(int) * size);
	i = -1;
	while (av[++i])
		t->array[i] = (int)ft_atoi(av[i]);
	t->size = size;
	ps_find_max(t);
	ps_find_min(t);
}
