/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:37:38 by psapio            #+#    #+#             */
/*   Updated: 2024/05/22 15:22:33 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	three_cases(t_stack *stack)
{
	int	first;
	int	second;

	first = stack->a->sticker;
	second = stack->a->next->sticker;
	if ((first == 2 && second == 1) || (first ==  1 && second == 0) || (first == 0 && second == 2))
		sa(stack);
	if (!is_order(stack->a)) 
	{
		if(stack->a->sticker == 1)
			rra(stack);
		else
			ra(stack);
	}
}
