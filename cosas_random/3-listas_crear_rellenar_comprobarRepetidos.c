/*
 * Creación de un doble puntero "char **word_array" que simula la salida del ft_split,
 * y que se usará para rellenar los nodos de la pila para el  push_swap.
 * A la vez, se van a analizando los números entrantes para testar la existencia de duplicados.
 * Si el número entrante ya se encuentra en la lista, devuelve NULL 
 *
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// atoi para transformar de array a número
int	ft_atoi(const char *str)
{
	int	digit_count;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	digit_count = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
		digit_count++;
	}
	if (digit_count == 0)
		return (0);
	return (sign * result);
}

//Función que convierte el valor obtenido por atoi en un puntero
int *ft_atoi_puntero (const char *str )
{
	int *nb = malloc (sizeof (int));
	if (nb == NULL)
		return  NULL;
	*nb = ft_atoi(str);
	return (nb);
}

// Estructura del nodo
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Función ft_lstnew_bonus.c
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// Función ft_lstadd_back_bonus.c
void	ft_lstadd_back(t_list	**lst, t_list	*new)
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

// Función para chequear repetidos en la lista
t_list	*repeated_number_finder(t_list *lst, int *nbr)
{
	t_list	*current;
	
	current = lst;
		printf("Entra en repeated_number_finder\n");
	while (current->next != NULL)
	{
		printf("repeated_number_finder: entra en while\n");
		if(*(int *)current->content == *nbr)
		{
			printf("repeated_number_finder: entra en if\n");
			printf("Error: número repetido\n");
			return NULL;
		}
		current = current -> next;
	}
	return (lst);
}

int main(void)
{
    t_list *myList = NULL; // Inicializamos una lista vacía.
	char *word_array[] = {"30", "20", "10", "30",  NULL};
   	int i;
	int *number_atoi_puntero;

	// Esto lo hago porque necesito una lista con un nodo. El primer elemento nunca va a estar repetido 
    number_atoi_puntero = ft_atoi_puntero(word_array[0]);
	ft_lstadd_back(&myList, ft_lstnew(number_atoi_puntero)); // Agregamos el nodo a la lista
	printf("\nImprimir elemento [0]: %s\n", word_array[0]);
	
	// Introducimos datos en lista
	i = 1;
	while (word_array[i] != NULL)
    {
		printf("\nImprimir elemento [i]: %s\n", word_array[i]);
    	number_atoi_puntero = ft_atoi_puntero(word_array[i]);
		printf("Número tras atoi_puntero y atoi:%d\t y Memoria del número:%p\n", *number_atoi_puntero, number_atoi_puntero);
		if (repeated_number_finder(myList, number_atoi_puntero) == NULL)	
		{
			printf("Salida tras encontrar número repetido\n");
			break; // Es sólo para que salte directamente al siguiente while y no salga del main. BORRARLO!!
			return (-1);
		}
		else
			ft_lstadd_back(&myList, ft_lstnew(number_atoi_puntero)); // Agregamos el nodo a la lista
		i++;
    }
   
	//Imprimo los elementos de cada nodo
	printf("La lista contiene:\n");
	while (myList != NULL)
	{
		printf("It content is: %d\n",*(int *) myList -> content);
		myList = myList -> next;
	}
    
	// Liberamos la memoria de los nodos y sus contenidos.
/*    t_list *current = myList;
    while (current != NULL)
    {
        t_list *next = current->next;
        free(current->content);
        free(current);
        current = next;
    }
*/
    return 0;
}
