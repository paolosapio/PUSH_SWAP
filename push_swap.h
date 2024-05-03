#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"

#define COMMANDS_SIZE 13

/* PUSHSWAP */

typedef struct s_stack
{
	t_list *a;
	t_list *b;
	bool must_print;
} t_stack;

typedef struct s_cmd
{
	char *cmd;
	char *description;
	bool (*fn)(t_stack *stack);
} t_cmd;

bool	compare_num_sign_split_to_itoa(char *result_split); //liberar memoria?
bool	compare_new_num_node(t_list *list, t_list *new_node);
bool	node_swap(t_list **list);
bool 	node_move(t_list **list1, t_list **list2);
void	print_list(t_list *list);
bool	print_stacks(t_stack *stack);
bool	sa(t_stack *stack);
bool	sb(t_stack *stack);
bool 	pa(t_stack *stack);
bool 	pb(t_stack *stack);
bool 	ss(t_stack *stack);
bool	rr(t_stack *stack);
bool	rb(t_stack *stack);
bool	ra(t_stack *stack);
bool	rra(t_stack *stack);
bool	rrb(t_stack *stack);
bool	rrr(t_stack *stack);
bool 	la(t_stack *stack);
bool 	lb(t_stack *stack);
bool	rotate_list(t_list **lst);
bool	reverse_rotate_list(t_list **lst);
int 	push_swap(t_stack *stack);
int 	checker(t_stack *stack);
t_stack	*buble_sort(t_stack *stack);
bool	is_order(t_list *stack);
void	sorter_nodes(t_stack *stack);
#endif
