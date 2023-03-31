/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:41:56 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/04/01 02:12:02 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_stack
{
	int *array;
	int size;
	int max_index;
	int min_index;
	int *arr_index;
} t_stack;

void ps_print_arr(int *arr, int size); // silinecek
int ps_check_ac(t_stack *stack_a, t_stack *stack_b, int ac, char **av);
int ps_check(int ac, char **av);
int ps_check_args(int ac, char **av);
int ft_strlen(char *str);
long ft_atoi(char *str);
char **ft_split(const char *s, char c);
int ps_len(char **splitted);
int ps_check_digits(char *arg);
void ps_free(char **strings);
int ps_digits(char **argv);
int ps_prepare_single(t_stack *t_a, t_stack *t_b, char **av);
int ps_prepare_multi(t_stack *t_a, t_stack *t_b, char **av);
void ps_init_a(t_stack *t, int size, char **av);
int ps_check_duplicate(t_stack *t);
int ps_control_av(char **av);
char **ps_init_av(char **av);
void ps_find_max(t_stack *t);
void ps_find_min(t_stack *t);
void ps_init_index_arr(t_stack *t);
void ps_init_index(t_stack *t);
void ps_init_index_list(t_stack *t, int j, int i, int size);
int ps_check_num(char **strs);
int ps_is_sorted(t_stack *t);
void ps_rotate(t_stack *t);
void ps_reverse_rotate(t_stack *t);
void ps_rotate_sort(t_stack *t);
void ps_sort_three(t_stack *t);
void ps_sort_five(t_stack *t_a, t_stack *t_b);
void ps_sort_more(t_stack *t_a, t_stack *t_b);
void ps_push_sort(t_stack *t_a, t_stack *t_b);
void ps_push(t_stack *t_a, t_stack *t_b);
void ps_reverse_rotate_sort(t_stack *t);
void ps_swap_sort(t_stack *t);
void ps_swap(t_stack *t);
void ps_ra(t_stack *t);
void ps_rra(t_stack *t);
void ps_sa(t_stack *t);
void ps_pa(t_stack *t_a, t_stack *t_b);
void ps_pb(t_stack *t_a, t_stack *t_b);
int ps_get_maxbit(t_stack *t_a);
void ps_print_str_arr(char **s);
void ps_exit();
#endif
