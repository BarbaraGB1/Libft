/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:53:53 by bargarci          #+#    #+#             */
/*   Updated: 2023/04/12 16:57:40 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nodo;
	t_list	*a;

	if (!lst || !del)
		return ;
	nodo = *lst;
	while (nodo)
	{
		del(nodo->content);
		a = nodo->next;
		free(nodo);
		nodo = a;
	}
	*lst = NULL;
}
