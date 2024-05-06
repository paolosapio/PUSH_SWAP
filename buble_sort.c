/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:03:27 by psapio            #+#    #+#             */
/*   Updated: 2024/05/06 13:55:48 by psapio           ###   ########.fr       */
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
	//	printf("LISTA ordeñada\n");
	//	print_list(stack->a);
		return (stack);
	}
	while(!is_order(stack->a))
	{ 
		sorter_nodes(stack);
	//	if(is_order(stack->a) == false)
	//		printf("LISTA NO ordeñada\n");
	//	else
	//		printf("\nLISTA ordeñada\n\n");
	}
	return stack;
}
