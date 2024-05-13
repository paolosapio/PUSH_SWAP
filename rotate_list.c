/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:34:28 by psapio            #+#    #+#             */
/*   Updated: 2024/05/13 15:34:32 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	rotate_list(t_list **lst)
{
	if (ft_lstsize(*lst) <= 1)
		return (false);
	ft_lstadd_back(lst, ft_lstpop_front(lst));
	return (true);
}
