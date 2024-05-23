/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:31:41 by psapio            #+#    #+#             */
/*   Updated: 2024/05/23 14:55:17 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

t_list	*ft_lstnew_int(int nb)
{
	int	*int_ptr;

	int_ptr = malloc(sizeof(int));
	*int_ptr = nb;
	if (!int_ptr)
		return (NULL);
	return (ft_lstnew(int_ptr));
}

t_list	*convert_to_list(char **result_split)
{
	int		i;
	t_list	*list;
	t_list	*node;

	i = 0;
	list = NULL;
	while (result_split[i] != NULL)
	{
		node = ft_lstnew_int(ft_atoi(result_split[i]));
		node->sticker = -1;
		if ((compare_new_num_node(list, node)) == true)
			ft_lstadd_back(&list, node);
		else
			ft_error();
		++i;
	}
	return (list);
}

t_stack	initialize_stack(void)
{
	t_stack	stack;

	stack.a = NULL;
	stack.b = NULL;
	return (stack);
}

void	ft_lstclear(t_list *list, void (*f)(void *ptr))
{
	t_list	*node_to_free;

	while (list)
	{
		node_to_free = list;
		(*f)(list->content);
		list = list->next;
		free(node_to_free);
	}
}

void	free_stack(t_stack *stack)
{
	ft_lstclear(stack->a, free);
	ft_lstclear(stack->b, free);
}
