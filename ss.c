/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:40:59 by psapio            #+#    #+#             */
/*   Updated: 2024/05/23 12:58:17 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ss(t_stack *stack)
{
	if (stack->must_print)
		write(1, "ss\n", 3);
	return (node_swap(&stack->a) | node_swap(&stack->b));
}
