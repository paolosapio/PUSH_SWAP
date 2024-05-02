#include "push_swap.h"

bool node_move(t_list **list1, t_list **list2)
{
	t_list *node;

	if (!*list2)
		return (false);
	node = ft_lstpop_front(list2);
	ft_lstadd_front(list1, node);
	return (true);
}
