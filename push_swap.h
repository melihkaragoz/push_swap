#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef	struct s_list
{
	int	len;
	int	*a;
}t_list;

int		is_digit(int c);
long	ft_atol(const char *str);
int		is_num(char *s);
int		is_duplicate(int *arr, int n, int size);
int		checkOrder(int	*arr, int size);

#endif
