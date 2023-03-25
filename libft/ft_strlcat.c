/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:30:46 by megordag          #+#    #+#             */
/*   Updated: 2023/03/20 01:30:24 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		a;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen (dst);
	a = 0;
	while (src[a] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[a];
		i++;
		a++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen (&src[a]));
}
