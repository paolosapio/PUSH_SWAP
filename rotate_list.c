#include "push_swap.h"

bool rotate_list(t_list **lst)
{
	if (ft_lstsize(*lst) <= 1)
		return (false);
	ft_lstadd_back(lst, ft_lstpop_front(lst));
	return (true);
}
