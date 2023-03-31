/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extended_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 02:46:24 by mkaragoz          #+#    #+#             */
/*   Updated: 2023/03/31 02:47:13 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_check_num(char **strs)
{
	int	i;

	i = -1;
	while (strs[++i])
	{
		if (ft_atoi(strs[i]) < -2147483648
			|| ft_atoi(strs[i]) > 2147483647)
			ps_exit();
	}
	return (1);
}
