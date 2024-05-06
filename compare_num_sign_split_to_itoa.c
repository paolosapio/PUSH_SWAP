/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_num_sign_split_to_itoa.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:26:48 by psapio            #+#    #+#             */
/*   Updated: 2024/05/05 12:36:21 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool compare_num_sign_split_to_itoa(char *result_split)
{
	int result_n;
	char *result_str;

	result_n = ft_atoi(result_split);
	result_str = ft_itoa(result_n);
	if (result_split[0] == '+')
		result_split++;
	while (*result_split == '0')
		result_split++;
	if (ft_strncmp(result_split, result_str, ft_strlen(result_split)) == 0)
	{
		free(result_str);
		return (true);
	}
	free(result_str);
	return (false);
}
