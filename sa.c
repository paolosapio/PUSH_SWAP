/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:21:50 by psapio            #+#    #+#             */
/*   Updated: 2024/05/13 15:40:43 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	sa(t_stack *stack)
{
	if (stack->must_print)
		write(1, "sa\n", 3);
	return (node_swap(&stack->a));
}
