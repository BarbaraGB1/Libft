/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:44:05 by bargarci          #+#    #+#             */
/*   Updated: 2023/04/01 19:14:50 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include "stdio.h"
int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while ((s[i] != '\0') && s[i] != c)
				i++;
		}
		else	
			i++;
	}
//	printf("%d", count);
	return (count);
}

int	ft_len(char const *s, char c, int i)
{
	int	p;
	
	p = 0;
	while (s[i] != c && s[i] != '\0')
	{
		p++;
		i++;
	}
//	printf("%d\n", p);
	return (p);
}	
int	ft_free(char **str, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{	
		free(str[i]);
		i++;
	}
	free (str);
	return (0);
}
char **ft_split(char const *s, char c)
{
	char	**str;
	int count;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	count = ft_count(s, c);
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (0);
	while (j < count)
	{
		if (s[i] != c)
		{
			str[j] = ft_substr(s, i, ft_len(s, c, i));
			i += ft_len(s, c, i);
			if (!str[j])
			{
				if (!ft_free(str, j))
						return (0);
				return (0);
			}
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

/*int main(void)
{
	
	char *s = "\0aa\0bbb";
	char c;
	int x;
	c = '\0';
	
x = ft_count(s, c);
	
	char **str;
	str = ft_split(s, c);
	while (*str != '\0')
	{
		printf("%s\n", *str);
		str++;
	}
}*/
