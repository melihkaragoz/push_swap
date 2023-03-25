/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:31:15 by megordag          #+#    #+#             */
/*   Updated: 2022/10/11 19:05:47 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(long long int n)
{
	if (n < -2147483648)
		return (0);
	if (n > 2147483647)
		return (-1);
	return ((int)n);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	minus_count;
	int	i;

	i = 0;
	minus_count = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v')
	i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_count *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (check(result * minus_count));
}
