/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:20:44 by bargarci          #+#    #+#             */
/*   Updated: 2023/04/12 16:17:39 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nodotemp;

	if (!new)
		return ;
	nodotemp = *lst;
	if (!nodotemp)
		*lst = new;
	else
	{
		while (nodotemp->next != '\0')
			nodotemp = nodotemp->next;
		nodotemp->next = new;
	}
}
