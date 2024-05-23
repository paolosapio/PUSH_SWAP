/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stickereitor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:55:46 by psapio            #+#    #+#             */
/*   Updated: 2024/05/23 12:57:40 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reset_stickers(t_list *stack_a)
{
	while (stack_a != NULL)
	{
		stack_a->sticker = -1;
		stack_a = stack_a->next;
	}
}

void	stickereitor(t_list *stack_a)
{
	int		i;
	int		list_size;
	t_list	*low_node;
	t_list	*temp_list;

	list_size = ft_lstsize(stack_a);
	i = 0;
	while (list_size != i)
	{
		temp_list = stack_a;
		low_node = stack_a;
		while (low_node->sticker != -1 && low_node->next != NULL)
			low_node = low_node->next;
		while (temp_list != NULL)
		{
			if ((*(int *)(low_node->content)
				> *(int*)(temp_list->content)) && temp_list->sticker == -1)
			{
				low_node = temp_list;
			}
			temp_list = temp_list->next;
		}
		low_node->sticker = i;
		i++;
	}
}
