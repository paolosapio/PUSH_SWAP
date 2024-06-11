/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_five_case.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:32:22 by psapio            #+#    #+#             */
/*   Updated: 2024/05/23 12:46:34 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_four_five_case(t_stack *stack)
{
	int	hi_sticker;

	hi_sticker = ft_lstsize(stack->a) - 1;
	while (ft_lstsize(stack->a) > 3)
	{	
		if ((stack->a->sticker == 0) || (stack->a->sticker == hi_sticker))
			pb(stack);
		else
			ra(stack);
	}
	reset_stickers(stack->a);
	stickereitor(stack->a);
	three_cases(stack);
	while (stack->b != NULL)
	{
		pa(stack);
		if (!is_order(stack->a))
			ra(stack);
	}
}
