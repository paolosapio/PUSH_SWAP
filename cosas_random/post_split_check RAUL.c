/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   post_split_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:48:53 by psapio            #+#    #+#             */
/*   Updated: 2024/03/21 13:15:17 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <stdbool.h>
/*
0x400 -> 0x1000 //str
0x408 -> 0x1500 // otro str
0x410 -> 0x0  //fin
*/

// push_swap   "1 2 4 5 59 4 2 -1-"

bool check_number(char *nb)
{
	int i;

	i = 0;
	while (nb[i])
	{
		if (i == 0 && (nb[0] == '-' || nb[0] == '+'))
			++i;
		if (!ft_isdigit(nb[i]))
			return false;
		++i;
	}
	return true;
}

int post_split_check (char **result_split)
{
	char **copy_split;

	copy_split = result_split;
	while (*copy_split != NULL)
	{
		result_split++;
	}
	return (0);
}

/*
int post_split_check (char **result_split)
{
	int	i;
	int	j;

	i = 0;
	while (result_split[i] != '\0')
	{
		j = 0;
		while(result_split[i][j])
		{
			printf("El valor de i es: %d\n", i);
			printf("El valor de j es: %d\n\n", j);
			j++;
		}
		i++;
	}
	return (0);
}
*/

int main (int argc, char **argv)
{
	char *array[] = {"KK", "SENCILLO", "no es", NULL};
	char **ptr;
	int i = 0;

	printf("%i\n", ++i);
	printf("%i\n", i++);
	ptr = array;

	while (i < 18)
	{
		if ((*ptr)[i] == '\0')
			printf("'\\0'");
		else
			printf("%c", (*ptr)[i]);
		++i;
	}
	i = 0;
	printf("\n");
	while (*ptr)
	{
		printf("address: %p (%s)\n", *ptr, *ptr);
		++i;
		++p:tr;
	}
	printf("address: %p (%s)\n", ptr, *ptr);
	return (0);
}

int main2 (int argc, char **argv)
{
	char *array[] = {"KK", "SENCILLO", "no es", NULL};
	char **table; 

	if (argc != 2)
		return (1);

	table = ft_split(argv[1], ' ');

	while (*table)
	{
		if (!check_number(*table))
		{
			printf("Error\n");
			return (1);
		}
		++table;
	}
//	post_split_check(array);

	return (0);
}
