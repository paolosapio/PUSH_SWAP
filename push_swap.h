/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psapio <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:58:52 by psapio            #+#    #+#             */
/*   Updated: 2024/05/23 13:09:56 by psapio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# define COMMANDS_SIZE 13

/* PUSHSWAP */

typedef struct s_stack
{
	t_list	*a;
	t_list	*b;
	bool	must_print;
}	t_stack;

typedef struct s_cmd
{
	char	*cmd;
	char	*description;
	bool	(*fn)(t_stack	*stack);
}	t_cmd;

bool	compare_num_sign_split_to_itoa(char *result_split); //liberar memoria?
bool	compare_new_num_node(t_list *list, t_list *new_node);
bool	node_swap(t_list **list);
bool	node_move(t_list **list1, t_list **list2);
void	print_list(t_list *list);
bool	print_stacks(t_stack *stack);
bool	sa(t_stack *stack);
bool	sb(t_stack *stack);
bool	pa(t_stack *stack);
bool	pb(t_stack *stack);
bool	ss(t_stack *stack);
bool	rr(t_stack *stack);
bool	rb(t_stack *stack);
bool	ra(t_stack *stack);
bool	rra(t_stack *stack);
bool	rrb(t_stack *stack);
bool	rrr(t_stack *stack);
bool	la(t_stack *stack);
bool	lb(t_stack *stack);
bool	rotate_list(t_list **lst);
bool	reverse_rotate_list(t_list **lst);
int		push_swap(t_stack *stack);
int		checker(t_stack *stack);
t_stack	*buble_sort(t_stack *stack);
bool	is_order(t_list *stack);
void	sorter_nodes(t_stack *stack);
void	stickereitor(t_list *stack_a);
void	radix_sort(t_stack *stack);
void	three_cases(t_stack *stack);
void	sort_four_five_case(t_stack *stack);
void	reset_stickers(t_list *stack_a);
t_list	*ft_lstnew_int(int nb);
t_list	*convert_to_list(char **result_split);
t_stack	initialize_stack(void);
void	ft_lstclear(t_list *list, void (*f)(void *ptr));
void	free_stack(t_stack *stack);
int		ft_error(void);
char	*ft_strjoin_free(char *str1, char *str2);
char	*join_table(char **table);
bool	check_numbers_table(char **table);
void	free_table(char **table);

#endif
