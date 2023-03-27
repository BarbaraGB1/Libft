/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:49:10 by bargarci          #+#    #+#             */
/*   Updated: 2023/03/24 19:13:52 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*src1;
	size_t	x;

	src1 = (char *)src;
	x = ft_strlen(dst);
	i = 0;
	if (!dst) 
		return (0);
	if (dst == 0)
		return (ft_strlen(src));
	if (dstsize <= x)
		return (ft_strlen(src1) + dstsize);
	while (dst[i] != '\0' && i < (dstsize -1))
	{
		i++;
	}
	while (i < (dstsize - 1) && *src1)
	{
		dst[i] = *src1;
		src1++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src1));
}
