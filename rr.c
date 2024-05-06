/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:37:41 by psapio            #+#    #+#             */
/*   Updated: 2024/04/26 17:50:47 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool rr(t_stack *stack)
{
	if (stack->must_print == 1)
		write(1, "rr\n", 3);
	return(rotate_list(&stack->a) | rotate_list(&stack->b));	
}