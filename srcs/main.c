#include "push_swap.h"

int main(int argc, const char **argv)
{
	t_dllist stack_a;
	t_dllist stack_b;

	printf("new_node  : %p\n", stack_a.sentinel_node);
	if (argc > 1)
	{
		if (ft_checker(argv) == true || ft_init(&stack_a, argv) == true)
		{
			ft_putstr_fd("Error\n", 1);
			return(1);
		}
		t_dllist_node *head = stack_a.sentinel_node;
		printf("new_node  : %p\n", stack_a.sentinel_node);
		head->val = 42;
		head = head->prev;
		while (head->val != 42) {
			printf("w : %d\n", head->val);
			head = head->prev;
		}
	}
	else
		ft_putstr_fd("Error\n", 1);
	return (1);
}
