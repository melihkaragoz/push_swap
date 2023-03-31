/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:53:53 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/03/31 02:04:48 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_check_c(char c)
{
	if (!(c >= 48 && c <= 57))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

long	ft_atoi(char *str)
{
	size_t	i;
	int		sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	ps_check_c(str[i]);
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	number *= sign;
	return (number);
}
