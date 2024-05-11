/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_new_num_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:13:31 by psapio            #+#    #+#             */
/*   Updated: 2024/05/11 19:46:24 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	compare_new_num_node(t_list *list, t_list *new_node)
{
	while (list)
	{
		if ((*((int *)list->content)) == (*((int *)(new_node->content))))
		{
			return (false);
		}
		list = list->next;
	}
	return (true);
}
