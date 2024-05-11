/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:41:03 by psapio            #+#    #+#             */
/*   Updated: 2024/05/11 19:57:41 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	node_swap(t_list **list)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (ft_lstsize(*list) <= 1)
		return (false);
	first = *list;
	second = first->next;
	third = second->next;
	*list = second;
	second->next = first;
	first->next = third;
	return (true);
}

/*
a = list
b = list->next

a <> b;

b
a
*/
