/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_pars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:31:41 by psapio            #+#    #+#             */
/*   Updated: 2024/05/23 15:14:14 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	ft_error(void)
{
	write(2, "Error\n", 6);
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
