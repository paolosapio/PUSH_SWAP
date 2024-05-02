#include "libft.h"

t_list *ft_lstpop_back(t_list **lst)
{
	t_list *last;
	t_list *aux_list;
	
	last = *lst;
	aux_list = *lst;
	while (aux_list != NULL)
	{
		if (aux_list->next && aux_list->next->next == NULL)
		{
			last = aux_list->next;
			aux_list->next = NULL;
			last->next = NULL;
			return (last);
		}	
		aux_list = aux_list->next;
	}
	*lst = NULL;
	return (last);
}
