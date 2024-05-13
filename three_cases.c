/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:37:38 by psapio            #+#    #+#             */
/*   Updated: 2024/05/13 17:24:57 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	three_cases(t_stack *stack)
{
	if (stack->a->sticker > stack->a->next->sticker)
		{
			if (stack->a->next->sticker > stack->a->next->next->sticker)
			{
				ra(stack);
				sa(stack);
			}
			else
				ra(stack);
		}
	return ;
}
