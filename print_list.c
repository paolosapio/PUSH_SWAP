/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:46:09 by psapio            #+#    #+#             */
/*   Updated: 2024/05/26 22:24:18 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_list(t_list *list)
{
	int i;

	i = 1;
	if (!list)
	{
		printf("Empty list\n");
		return ;
	}
	while (list)
	{
		printf("Nº[%d] NODOS->STICKER:%d\n", i, list->sticker);
		list = list->next;
		++i;
	}
}
