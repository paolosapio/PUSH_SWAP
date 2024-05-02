/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_min_max_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:39:45 by psapio            #+#    #+#             */
/*   Updated: 2024/03/13 14:57:33 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>

int control_min_max_int(long conversion)
{
	printf("Controller recibe conversion: %ld\n", conversion); 
	if((conversion > INT_MAX) || (conversion < INT_MIN))
		return (-1);
	return (0);
}
