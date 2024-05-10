/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:21:53 by psapio            #+#    #+#             */
/*   Updated: 2024/05/10 18:27:58 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdbool.h>

int push_swap(t_stack *stack)
{
	(void)stack;
	
	stack->must_print = true;
//	printf("ANTES\n");
//	print_list(stack->a);
	stickereitor(stack->a);
	radix_sort(stack);
//	buble_sort(stack);
//	printf("DESPUES\n");
//	print_list(stack->a);
//	printf("\n :D hello from Push_Swap :D\n");
	return (0);
}
