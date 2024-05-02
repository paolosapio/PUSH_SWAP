/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:03:27 by psapio            #+#    #+#             */
/*   Updated: 2024/05/02 20:42:56 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool is_order(t_list *stack)
{
	while (stack->next != NULL)
	{
		if (*(int*)(stack->content) > *(int*)(stack->next->content))
			return (false);
		stack = stack->next;
	}
	return (true);
}

t_stack *buble_sort(t_stack *stack)
{

	if (is_order(stack->a) == true)
	{
		printf("Ordeñada\n");
		print_list(stack->a);
	}
	else 
	{
		printf("NOOOO ordeñado\n");
		print_list(stack->a);
	}
	/*
	while(is_order(stack->a))
	{
		printf("entrada a la funcion\n");
		if(stack->a->content > stack->a->next->content)
			ra(stack);
		else
			sa(stack);
	}*/
	return stack;
}

