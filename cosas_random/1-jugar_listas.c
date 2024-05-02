#include <stdio.h>
#include<stdlib.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

//funcion newlist_int
t_list	*ft_lstnew_int(int content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
//funcion addback bonus LIBFT
void	ft_lstadd_back_bonus(t_list	**lst, t_list	*new)
{
	t_list	*current;

	current = *lst;
	if (current == NULL)
		*lst = new;
	else
	{
		while (current -> next != NULL)
			current = current -> next;
		current -> next = new;
	}
} 

// Función sa swap: Intercambia los dos primeros elementos del stack a. No hace nada si hay uno o menos elementos.
t_list	*ft_lst_swap (t_list **lst)
{
	t_list *temp1;
	t_list *temp2;

	temp1 = *lst;
	*lst = (*lst)->next;
	temp2 = *lst;
	*lst = (*lst)->next;
	temp1->next=*lst;
	temp2->next=temp1;
	*lst = temp2;
	return (*lst);
}

int main (void)
{
	int	num[] = {1, 2, 3};
	t_list	*stack;
	int size;
	int i;
	t_list *temp1;
	t_list *swap_start;

	// Crear lista añadiendo cada contenido de num[] en un nodo diferente
	size = sizeof(num)/ sizeof(*num);
	stack = ft_lstnew_int(num[0]);
	i = 1;
	while (size--)
	{
		ft_lstadd_back_bonus(&stack, ft_lstnew_int(num[i]));
		i++;	
	}
	// Diferentes copias del puntero *stack para no perder su referencia
	swap_start = stack;
	temp1 = stack;	

	while (stack->next != NULL)
	{
		printf("%d  | \n", stack->content);
		printf("------ \n");
		stack = stack->next;
	}
	printf("\n\n");
	// Testar que mantenemos la referencia
	while (temp1->next != NULL)
	{
		printf("%d  | \n", temp1->content);
		printf("------ \n");
		temp1 = temp1->next;
	}
	printf("\n\n");


///////////////////////
// TEST FUNCIÓN SWAP //
///////////////////////
	
	swap_start = ft_lst_swap(&swap_start);  
//	ft_lst_swap(&swap_start);  
	while (swap_start->next != NULL)
	{
		printf("%d  | \n", swap_start->content);
		printf("------ \n");
		swap_start = swap_start->next;
	}










	return (0);
}
