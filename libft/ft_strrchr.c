/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:13:45 by megordag          #+#    #+#             */
/*   Updated: 2022/10/11 19:58:20 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	i;
	size_t			len;

	i = c;
	len = ft_strlen(s);
	if (i == '\0')
		return ((char *)&s[len]);
	while (len > 0)
	{
		if (s[len - 1] == i)
			return ((char *)&s[len - 1]);
		len--;
	}
	return (NULL);
}
