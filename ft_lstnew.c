/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:01:05 by bargarci          #+#    #+#             */
/*   Updated: 2023/04/12 16:15:39 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo1;

	nodo1 = malloc(sizeof(t_list));
	if (!nodo1)
		return (0);
	nodo1->content = content;
	nodo1->next = NULL;
	return (nodo1);
}
