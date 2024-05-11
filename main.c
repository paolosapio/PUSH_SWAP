/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:31:41 by psapio            #+#    #+#             */
/*   Updated: 2024/05/11 21:08:17 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	ft_error(void)
{
	write(2, "Error", 5);
	exit(1);
}

char	*ft_strjoin_free(char *str1, char *str2)
{
	char	*tmp;

	tmp = ft_strjoin(str1, str2);
	free(str1);
	return (tmp);
}

char	*join_table(char **table)
{
	int		i;
	char	*result;

	result = ft_strdup("");
	if (result == NULL)
		return (NULL);
	i = 0;
	while (table[i])
	{
		if (table[i][0] == '\0')
		{
			free(result);
			ft_error();
		}
		result = ft_strjoin_free(result, table[i]);
		result = ft_strjoin_free(result, " ");
		++i;
	}
	return (result);
}

bool	check_numbers_table(char **table)
{
	int	i;

	i = 0;
	while (table[i] != NULL)
	{
		if (!compare_num_sign_split_to_itoa(table[i]))
			return (false);
		++i;
	}
	return (true);
}

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

void	free_table(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		free(table[i]);
		++i;
	}
	free(table);
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

int	main(int argc, char **argv)
{
	char	*result_join;
	char	**result_split;
	t_stack	stack;
	int		ret;

	ret = 0;
	stack = initialize_stack();
	if (argc < 2)
		ft_error();
	result_join = join_table(argv + 1);
	if (result_join == NULL)
		return (0);
	result_split = ft_split(result_join, ' ');
	free(result_join);
	if (!check_numbers_table(result_split))
	{
		free_table(result_split);
		ft_error();
	}
	stack.a = convert_to_list(result_split);
	free_table(result_split);
	ret = push_swap(&stack);
	free_stack(&stack);
	return (ret);
}
