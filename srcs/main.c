//#include "push_swap.h"
#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	t_dllist *stack_a;
	t_dllist *stack_b;

	if (argc < 2 || ft_container_init(&stack_a, &stack_b) == true)
	{
		write(2, ERROR, ft_strlen(ERROR));
		return (1);
	}
	if (argc == 2)
		ft_list_init(ft_split(argv[1], ' '), stack_a->sentinel_node);
	else
		ft_list_init(++argv, stack_a->sentinel_node);
	
	ft_sort(stack_a, stack_b);
	ft_list_destroy(stack_a);
	ft_list_destroy(stack_b);
	return (0);
}
