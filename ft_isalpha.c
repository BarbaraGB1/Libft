/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:09:07 by bargarci          #+#    #+#             */
/*   Updated: 2023/03/13 20:16:23 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	a;
	a = '0';
	ft_isalpha(a);
}*/
