#ifndef PUSH_SWAP_H
#	define PUSH_SWAP_H

#	include <stdio.h>
#	include <stdlib.h>
# include "../lib/libft/libft.h"

typedef struct s_stack {
				t_list *head;
				int 	size;
}														t_stack;

int main(int argc, const char **argv);
int ft_checker(const char **dptr);
int ft_init(t_stack *stack_a, const char **argv);
#endif
