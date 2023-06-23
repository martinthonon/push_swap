#include "push_swap.h"

int main(int argc, char **argv)
{
	t_dllist *stack_a;
	t_dllist *stack_b;
	bool init_status;

	if (argc < 2 || ft_container_init(&stack_a, &stack_b) == true)
		return (1);
	if (argc == 2)
		init_status = ft_list_init(ft_split(argv[1], ' '), stack_a);
	else
		init_status = ft_list_init(++argv, stack_a);
	if (init_status == true)
	{
		write(1, ERROR, 6);
		return (1);
	}
	ft_sort(stack_a, stack_b);
	ft_list_destroy(stack_a);
	ft_list_destroy(stack_b);
	return (0);
}
