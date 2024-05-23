/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:03:27 by psapio            #+#    #+#             */
/*   Updated: 2024/05/23 14:17:52 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*buble_sort(t_stack *stack)
{
	if (is_order(stack->a) == true)
	{
		return (stack);
	}
	while (!is_order(stack->a))
	{
		sorter_nodes(stack);
	}
	return (stack);
}
