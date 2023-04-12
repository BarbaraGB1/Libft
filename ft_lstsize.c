/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:47:20 by bargarci          #+#    #+#             */
/*   Updated: 2023/04/11 12:56:35 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*nodo;
	size_t	i;

	i = 0;
	nodo = lst;
	while (nodo != '\0')
	{
		nodo = nodo->next;
		i++;
	}
	return (i);
}
