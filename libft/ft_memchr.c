/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:33:40 by megordag          #+#    #+#             */
/*   Updated: 2022/10/11 19:11:55 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*i;
	size_t			len;

	i = (unsigned char *)s;
	len = 0;
	while (len < n)
	{
		if (i[len] == (unsigned char)c)
			return (i + len);
		len++;
	}
	return (NULL);
}
