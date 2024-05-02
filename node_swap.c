/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:41:03 by psapio            #+#    #+#             */
/*   Updated: 2024/04/22 13:38:18 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
a = list
b = list->next

a <> b;

b
a
*/

bool node_swap(t_list **list)
{
	t_list *first;
	t_list *second;
	t_list *third;
	
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
