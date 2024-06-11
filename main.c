/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:31:41 by psapio            #+#    #+#             */
/*   Updated: 2024/05/27 17:04:32 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	checkeitor(int argc, char **argv)
{
	if (argc < 2)
		exit(1);
	if (argv[1][0] == ' ')
		ft_error();
}

int	main(int argc, char **argv)
{	
	char	*result_join;
	char	**result_split;
	t_stack	stack;
	int		ret;

	ret = 0;
	stack = initialize_stack();
	checkeitor(argc, argv);
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
