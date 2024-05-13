/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:41:10 by psapio            #+#    #+#             */
/*   Updated: 2024/05/13 16:11:39 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	rrr(t_stack *stack)
{
	if (stack->must_print)
		write(1, "rrr\n", 4);
	return (reverse_rotate_list(&stack->a) | reverse_rotate_list(&stack->b));
}
