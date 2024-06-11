/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:03:27 by psapio            #+#    #+#             */
/*   Updated: 2024/05/23 13:46:59 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_order(t_list *stack)
{
	if (!stack)
		return (false);
	while (stack->next != NULL)
	{
		if (*(int *)(stack->content) > *(int *)(stack->next->content))
			return (false);
		stack = stack->next;
	}
	return (true);
}
