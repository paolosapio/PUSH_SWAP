#include "push_swap.h"

bool reverse_rotate_list(t_list **lst)
{
	if (ft_lstsize(*lst) < 2)
		return (false);
	ft_lstadd_front(lst, ft_lstpop_back(lst));
	return (true);
}
