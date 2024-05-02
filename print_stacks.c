#include "push_swap.h"

bool print_stacks(t_stack *stack)
{
	t_list *stack_a;
	t_list *stack_b;
	ssize_t diff;

	diff = ft_lstsize(stack->a) -ft_lstsize(stack->b);
	stack_a = stack->a;
	stack_b = stack->b;

	while (stack_a || stack_b)
	{
		printf("\t");
		if (stack_a && diff >= 0)
		{
			printf("%4i", *(int *)stack_a->content);
			stack_a = stack_a->next;
		}
		printf("\t");
		if (stack_b && diff <= 0)
		{
			printf("%4i", *(int *)stack_b->content);
			stack_b = stack_b->next;
		}
		printf("\n");
		if (diff > 0)
			--diff;
		else if (diff < 0)
			++diff;
	}
	printf("\t --a--\t --b--\n");
	return true;
}
