/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_check_if_digit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:44:09 by psapio            #+#    #+#             */
/*   Updated: 2024/03/20 20:21:55 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int pre_check_if_digit(int arg_numbers, char **arg_names)
{
	int i;
	int j;

	//Control número válidos argumentos (arg_number > 2)
	i = 1;
	while (arg_numbers -1)
	{
		j = 0;
		while (arg_names[i][j] != '\0')
		{
			if(((arg_names[i][j] < '0') || (arg_names[i][j] > '9')) && arg_names[i][j] != ' ' && arg_names[i][j] != '+' && arg_names[i][j] != '-')
			{
				printf("Caracter detectado:%c\n", arg_names[i][j]);
				return (-1);
			}
			else
			{
				//printf("ARGUMENTOS digitos o esapcio:%c\n", arg_names[i][j]);
				j++;
			}
		}
		i++;
		arg_numbers--;
	}	
	return (0);
}
/*
int main (void)
{
	int arg_numbers = 4;
	char *arg_names[] = {"a./aut", "123", "E4 5", "123 123 caca"};
	pre_check_if_digit(arg_numbers, arg_names);
	return (0);
}
*/
/*
int main(int arg_numbers, char **arg_names)
{
    int i;
//  long number_ok;
    // Control de arrays si haya caracteres
    
	i = 0;
    while ((arg_numbers-- -1))
    {
        if ((pre_check_if_digit(arg_numbers +1, &arg_names[i++]) == -1))
            return(printf("Error"), 0);
		return(0);

		arg_numbers--;
    }
}
*/
