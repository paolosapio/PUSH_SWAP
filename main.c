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
