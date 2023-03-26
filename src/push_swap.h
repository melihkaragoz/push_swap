#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include "../libft/libft.h"

typedef struct s_swap
{
	int i;
	int	*arr;
	int	*arr_index;
	int size;
} t_swap;

void ps_free(char **s);
void ps_init(t_swap *t);
void ps_init_arr_index(t_swap *t_a);
int *ps_split_args(char **av, t_swap *t_a);
int	ps_count_numbers(char **av);
void	ps_print_arr(int *arr, int size);
int	ps_is_num(char *s);
void ps_exit_with_error();
int check_duplicate(int *arr, int size);
void ps_order_indexes(t_swap *t);
#endif
