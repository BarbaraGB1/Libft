/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:29:17 by bargarci          #+#    #+#             */
/*   Updated: 2023/03/24 20:23:27 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	p;
	size_t	lens;

	p = 0;
	i = (size_t)start;
	j = 0;
	lens = ft_strlen(s);
	if (len > lens)
		len = ft_strlen(s) - start;
	if (start >= lens)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	while (s[p] != '\0')
	{	
		if (i == p && i < start + len && s[p] != '\0')
		{
		str[j] = s[i];
		i++;
		j++;
		}
		p++;
	}
	str[j] = '\0';
	return (str);
}
/*int main(void)
{
char	s[] = "tripouille";
unsigned int	start = 0;
size_t	len = 42000;
printf("%s", ft_substr(s, start, len));
}*/
