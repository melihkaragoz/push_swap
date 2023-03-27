#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"

typedef struct s_swap
{
	int i;
	int *arr;
	int *arr_index;
	int size;
	int max_num;
	int max_index;
	int min_num;
	int min_index;
} t_swap;

void ps_free(char **s);
void ps_init(t_swap *t);
void ps_init_arr_index(t_swap *t_a);
int *ps_split_args(char **av, t_swap *t_a);
int ps_count_numbers(char **av);
void ps_print_arr(int *arr, int size);
int ps_is_num(char *s);
void ps_exit_with_error();
int check_duplicate(int *arr, int size);
void ps_find_max(int *arr, int size, t_swap *t_a);
void ps_find_min(int *arr, int size, t_swap *t_a);
void ps_order_indexes(t_swap *t_a);

void  ps_push(t_swap *t_a, t_swap *t_b, char *str);
void ps_swap_a(t_swap *t_a);
void ps_swap_b(t_swap *t_b);
void ps_push_a(t_swap *t_a, t_swap *t_b);
void ps_push_b(t_swap *t_a, t_swap *t_b);
void ps_rotate_a(t_swap *t_a);
void ps_rotate_b(t_swap *t_b);
void ps_reverse_rotate_a(t_swap *t_a);
void ps_reverse_rotate_b(t_swap *t_b);
void ps_swap(t_swap *t_a, t_swap *t_b, char *str);
void ps_sort_three(t_swap *t_a, t_swap *t_b);
void ps_sort_four(t_swap *t_a, t_swap *t_b);
void ps_sort_five(t_swap *t_a, t_swap *t_b);
void ps_sort(t_swap *t_a, t_swap *t_b);

#endif
