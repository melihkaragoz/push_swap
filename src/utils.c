/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:50:00 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/04/01 02:12:52 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check(int ac, char **av)
{
	if (!ps_check_args(ac, av))
		return (0);
	if (!ps_digits(av + 1))
		ps_exit();
	return (1);
}

void	ps_print_arr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		printf("%d\n", arr[i++]);
}

int	ps_check_args(int ac, char **av)
{
	char	**splitted;

	if (ac == 1)
		return (0);
	else if (ac == 2)
	{
		splitted = ft_split(av[1], ' ');
		if (ps_len(splitted) == 1)
		{
			if (ft_atoi(splitted[0]) > 2147483647
				|| ft_atoi(splitted[0]) < -2147483648)
				write(2, "Error\n", 6);
			if (!ps_check_digits(*splitted))
				write(2, "Error\n", 6);
			return (0);
		}
		else if (ps_len(splitted) == 0)
			return (0);
		ps_free(splitted);
	}
	return (1);
}

int	ps_digits(char **av)
{
	int	i;

	i = -1;
	while (av[++i])
		if (!ps_check_digits(av[i]))
			return (0);
	return (1);
}

void	ps_free(char **strings)
{
	int	i;

	i = -1;
	while (strings[++i])
		free(strings[i]);
	free(strings);
}
