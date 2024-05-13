/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:33:03 by psapio            #+#    #+#             */
/*   Updated: 2024/05/13 15:33:38 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	reverse_rotate_list(t_list **lst)
{
	if (ft_lstsize(*lst) < 2)
		return (false);
	ft_lstadd_front(lst, ft_lstpop_back(lst));
	return (true);
}
