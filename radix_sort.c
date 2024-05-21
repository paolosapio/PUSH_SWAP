/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:12:04 by psapio            #+#    #+#             */
/*   Updated: 2024/05/21 11:44:34 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	radix_sort(t_stack *stack)
{
	int bit_count;
	int node_amount;
	int bit_column;

	bit_count = 0;
	bit_column = 1;
	while (bit_count < 32 && is_order(stack->a) == false)
	{
		node_amount = ft_lstsize(stack->a);
		while (node_amount != 0)
		{
			if ((stack->a->sticker & bit_column) == 0)
				pb(stack);
			else
				ra(stack);	
			node_amount--;
		}
		while (stack->b != NULL)
			pa(stack);
		bit_count++;
		bit_column = bit_column << 1;
	}
	return ;
}
