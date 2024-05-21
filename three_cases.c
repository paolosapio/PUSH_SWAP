/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:37:38 by psapio            #+#    #+#             */
/*   Updated: 2024/05/21 14:33:51 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	three_cases(t_stack *stack)
{
	int	first;
	int	second;
	int	third;

	first = stack->a->sticker;
	second = stack->a->next->sticker;
	third = stack->a->next->next->sticker;
	
	if (first == 2 && first > second && second < third)
			ra(stack);
	else if (first == 0 || first > second)
		{
			sa(stack);
			if (!is_order(stack->a))
			{
				if(stack->a->next->sticker == 0)	
					ra(stack);
				else
					rra(stack);
			}
		}
	else
		rra(stack);
	return ;
}
