NAME	=	push_swap
BONUS 	= 	checker

SRCS	= \
		main.c\
		push_swap.c\
		compare_num_sign_split_to_itoa.c\
		compare_new_num_node.c\
		node_swap.c\
		node_move.c\
		sa.c\
		sb.c\
		pa.c\
		pb.c\
		ss.c\
		ra.c\
		rb.c\
		rr.c\
		rra.c\
		rrb.c\
		rrr.c\
		rotate_list.c\
		reverse_rotate_list.c\
		GNL/get_next_line.c\
		GNL/get_next_line_utils.c\
		buble_sort.c\
		sorter_nodes.c\
		stickereitor.c\
		radix_sort.c\
		three_cases.c\
		sort_four_five_case.c\
		is_order.c\
		utils_list.c\
		utils_pars.c

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc 

RM	=	rm -f

SANITIZE = 	-fsanitize=address -fsanitize=leak -g3
CFLAGS	=	-Wall -Wextra -Werror $(SANITIZE)

all		:	$(NAME)

bonus	: 	$(BONUS)

$(NAME)	:	$(OBJS) 
		make -C ./libft
		$(CC) $(CFLAGS) $(OBJS) -I ./libft/libft.h ./libft/libft.a -o $(NAME)

$(BONUS) :	$(NAME)
		ln -s $(NAME) $@
	   
clean	:
			$(RM) $(OBJS)
			make fclean -C ./libft	

fclean	:	clean
			$(RM) $(NAME) $(BONUS)

.PHONY	:	all clean fclean re

re	:	fclean all
