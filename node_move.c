/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:54:09 by psapio            #+#    #+#             */
/*   Updated: 2024/05/11 19:54:36 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	node_move(t_list **list1, t_list **list2)
{
	t_list	*node;

	if (!*list2)
		return (false);
	node = ft_lstpop_front(list2);
	ft_lstadd_front(list1, node);
	return (true);
}
