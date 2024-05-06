/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:21:53 by psapio            #+#    #+#             */
/*   Updated: 2024/05/06 13:57:57 by psapio           ###   ########.fr       */
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
	buble_sort(stack);
//	printf("DESPUES\n");
//	print_list(stack->a);
//	printf("\nhello from Push_Swap\n");
	return (0);
}
