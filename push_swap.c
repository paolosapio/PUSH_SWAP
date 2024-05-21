/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:21:53 by psapio            #+#    #+#             */
/*   Updated: 2024/05/21 14:15:14 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>

int push_swap(t_stack *stack)
{
	if (is_order(stack->a) == true)
		return 0;
	stack->must_print = true;
	stickereitor(stack->a);
	if (ft_lstsize(stack->a) > 5)
		radix_sort(stack);
	else if (ft_lstsize(stack->a) == 2)
		sa(stack);
	else if (ft_lstsize(stack->a) == 3)
		three_cases(stack);
	else
		sort_four_five_case(stack);
	print_list(stack->a);
	return (0);
}
