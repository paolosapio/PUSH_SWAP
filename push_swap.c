#include "push_swap.h"

int push_swap(t_stack *stack)
{
	(void)stack;
	
	stack->must_print = true;
	printf("ANTES\n");
	print_list(stack->a);
	buble_sort(stack);
	printf("DESPUES\n");
	print_list(stack->a);
	printf("hello from PS\n");
	return (0);
}
