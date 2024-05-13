/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:21:53 by psapio            #+#    #+#             */
/*   Updated: 2024/05/13 17:18:35 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>

int push_swap(t_stack *stack)
{
	(void)stack;
	
	stack->must_print = true;
	stickereitor(stack->a);
	if (ft_lstsize(stack->a) > 5)
		radix_sort(stack);
	else if (ft_lstsize(stack->a) == 2)
		sa(stack);
	else if (ft_lstsize(stack->a) == 3)
		three_cases(stack);
	//	else
	//	la de 4 o 5
	return (0);
}
