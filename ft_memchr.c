/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:05:55 by bargarci          #+#    #+#             */
/*   Updated: 2023/04/17 17:10:37 by bargarci         ###   ########.fr       */
/*                                                                            */
/* *********************************************************************/
#include <stdio.h>
#include <string.h>

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	a;
	char	*b;

	i = 0;
	a = (char)c;
	b = (char *)s;
	while (i < n)
	{
		if (b[i] == a)
			return (&b[i]);
		i++;
	}
	return (0);
}
#include <stdio.h>
int main(void)
{
	size_t n;
	n = 1;
	int	j;
	j = 'm';
	char str2[] = "mHoa, mulndmmmmmmmo!";
	printf("%s", memchr(str2, j, n));
	printf("%s", ft_memchr(str2, j, n));
}
