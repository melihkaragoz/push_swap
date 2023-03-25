/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:34:44 by megordag          #+#    #+#             */
/*   Updated: 2022/10/11 19:31:53 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	i;

	i = (unsigned char)c;
	if (i == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s != '\0')
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
