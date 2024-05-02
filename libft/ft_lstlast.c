/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:58:43 by psapio            #+#    #+#             */
/*   Updated: 2024/04/11 15:13:33 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
t_list *ft_lstlast(t_list *lst)
{

}
*/

void ft_lstadd_back(t_list **lst, t_list *new);

int main (void)
{
	int numeros[] = {10, -5, 30, 50, 70, 100, 500, 1000, 78978997};
	int cantidad_numeros = sizeof(numeros) / sizeof(int);
	printf("cantid de numerso en el array: %d\n\n", cantidad_numeros);
	t_list *list = NULL;
	t_list *node;
	int i = 0;
	/*
	list = ft_lstnew(&numeros[i]);
	printf("valor dato primer nodo: %d\n\n", *(int *)list->content);
	*/
	node = list;
	while (cantidad_numeros--)
	{
		node = ft_lstnew(&numeros[i]);
		ft_lstadd_back(&list, node);
		++i;
		printf("contenido nodos consecutivos: %d\n", *(int*)node->content);
	}
	cantidad_numeros = sizeof(numeros) / sizeof(int);

	while (cantidad_numeros--)
	{
		printf("reimpresion datos lista entera: %d\n", *(int*)list->content);
		list = list->next;
	}
	return (0);
}

