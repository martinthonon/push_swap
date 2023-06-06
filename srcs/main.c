#include "push_swap.h"

int main(int argc, char **argv)
{
	t_dllist *stack_a;
	t_dllist *stack_b;
	char **split;

	if (argc < 2)
	{
		write(2, ERROR, ft_strlen(ERROR));
		return (1);
	}
	else if (argc == 2)
	{
		split = ft_split(argv[1], ' ');
		if (ft_checker(split) == true)
		{
			write(2, ERROR, ft_strlen(ERROR));
			ft_free(split);
			return (1);
		}
		stack_a = ft_init(split);
		if (stack_a == NULL)
		{
			write(2, ERROR, ft_strlen(ERROR));
			ft_free(split);
			return (1);
		}
	}
}
