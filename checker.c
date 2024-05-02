#include "push_swap.h"
#include "GNL/get_next_line.h"

static t_cmd *get_command(int index)
{
	static t_cmd commands[] = {
		{"rr\n",  "Rotate stack a/b", &rr},
		{"rra\n", "Reverse rotate stack a", &rra},
		{"rrb\n", "Reverse rotate stack b", &rrb},
		{"rrr\n", "Reverse rotate stack a/b", &rrr},
		{"ra\n",  "Rotate stack a", &ra},
		{"rb\n",  "Rotate stack b", &rb},
		{"sa\n",  "Swap first/second node stack a", &sa},
		{"sb\n",  "Swap first/second node stack b", &sb},
		{"pa\n",  "Push node from stack b to a", &pa},
		{"pb\n",  "Push node from stack a to b", &pb},
		{"ss\n",  "Swap first/second node stack a/b", &ss},
		{"ls\n",  "List staciks", &print_stacks},
		{"q\n",   "Quit program", NULL}
	};
	return (commands + index);
}

static t_cmd *find_cmd(const char *line)
{
	int i;

	i = 0;
	while (i < COMMANDS_SIZE)
	{
		if (ft_strncmp(line, get_command(i)->cmd, ft_strlen(line)) == 0)
			return (get_command(i));
		++i;
	}
	return (NULL);
}

static void print_description(void)
{
	int i;

	i = 0;
	while (i < COMMANDS_SIZE)
	{
		printf("%5.*s - %s\n", (int)ft_strlen(get_command(i)->cmd) - 1, get_command(i)->cmd, get_command(i)->description);
		++i;
	}
	printf("\n");
}

int checker(t_stack *stack)
{
	t_cmd *cmd;
	char *line;
	
	stack->must_print = false;
	print_description();
	line = get_next_line(0);
	while (line != NULL)
	{
		if (*line != '\n')
		{
			cmd = find_cmd(line);
			if (cmd == NULL)
				printf("Command not found\n");
			else
			{
				if (cmd->fn == NULL)
					break ;
				else if (cmd->fn(stack) == false)
					printf("No enough items\n");
			}
		}
		free(line);
		line = get_next_line(0);
	}
	free(line);
	return (0);
}
