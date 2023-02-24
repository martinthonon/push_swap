#include "push_swap.h"

int main(int argc, const char **argv)
{
				t_stack stack_a;
//				t_stack stack_b;

				if (argc > 1)
				{
								if (ft_checker(argv))
												return(ft_putstr_fd("Error\n", 1), 0);
								else if (ft_init(&stack_a, argv))
												return(ft_putstr_fd("Error\n", 1), 0);
				}
				else
								ft_putstr_fd("Error\n", 1);
				return (0);
}
