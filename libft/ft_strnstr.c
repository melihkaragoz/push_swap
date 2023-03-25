/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:09:58 by megordag          #+#    #+#             */
/*   Updated: 2022/10/13 18:04:44 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	char	*hay;

	i = 0;
	c = 0;
	hay = (char *)haystack;
	if (len < 0)
		len = ft_strlen(haystack);
	if (!needle || !ft_strlen(needle))
		return (&hay[i]);
	while (i < len && hay[i])
	{
		if (c + i < len)
			while (hay[c + i] == needle[c] && hay[c + i] != 0 && needle[c] != 0)
				c++;
		if (c == ft_strlen(needle))
			return (&hay[i]);
		i++;
	}
	return (NULL);
}
