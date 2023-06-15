#include "push_swap.h"

int main(int argc, char **argv)
{
	t_dllist *stack_a;
	t_dllist *stack_b;

	if (argc < 2)
	{
		write(2, ERROR, ft_strlen(ERROR));
		return (1);
	}
	if (argc == 2)
		stack_a = ft_init(ft_split(argv[1], ' '));
	else
		stack_a = ft_init(++argv);
	stack_b = ft_list_new();
	if (stack_a == NULL || stack_b == NULL) 
	{
		write(2, ERROR, ft_strlen(ERROR));
		return (1);
	}
	ft_sort(stack_a, stack_b);
	ft_list_destroy(stack_a);
	ft_list_destroy(stack_b);
	return (0);
}
