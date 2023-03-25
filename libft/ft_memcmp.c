/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:57:15 by megordag          #+#    #+#             */
/*   Updated: 2022/10/11 19:14:52 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			len;
	unsigned char	*i;
	unsigned char	*a;

	i = (unsigned char *)s1;
	a = (unsigned char *)s2;
	len = 0;
	while (len < n)
	{
		if ((i[len]) != (a[len]))
			return ((i[len]) - (a[len]));
		len++;
	}
	return (0);
}
