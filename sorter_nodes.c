/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:55:46 by psapio            #+#    #+#             */
/*   Updated: 2024/05/03 18:04:20 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorter_nodes(t_stack *stack)
{
	int long_list;

	long_list = ft_lstsize(stack->a);
	while(long_list - 1)
	{
		if (*(int*)(stack->a->content) > *(int*)(stack->a->next->content))
		{
			sa(stack);
			ra(stack);
			long_list--;
		}
		else
		{
			long_list--;
			ra(stack);
		}
	}
	ra(stack);
}

