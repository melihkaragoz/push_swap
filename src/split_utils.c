/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:54:54 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/03/31 23:47:46 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ps_len(char **splitted)
{
	int	i;

	i = 0;
	while (splitted[i])
		i++;
	return (i);
}

int	ps_check_digits(char *av)
{
	int	i;

	i = -1;
	while (av[++i])
		if ((av[i] < 48 || av[i] > 57)
			&& (av[i] != ' ' && av[i] != '-' && av[i] != '+'))
			return (0);
	i = -1;
	while (av[++i])
		if (av[i] >= 48 && av[i] <= 57)
			if (av[i + 1] == '-' || av[i + 1] == '+')
				return (0);
	return (1);
}
