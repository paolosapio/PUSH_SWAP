/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:49:12 by psapio            #+#    #+#             */
/*   Updated: 2024/05/13 15:32:19 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	rb(t_stack *stack)
{
	if (stack->must_print)
		write(1, "rb\n", 3);
	return (rotate_list(&stack->b));
}
