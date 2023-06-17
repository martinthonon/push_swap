//#include "push_swap.h"
#include "../../includes/push_swap.h"

bool ft_container_init(t_dllist **stack_a, t_dllist **stack_b);

bool ft_container_init(t_dllist **stack_a, t_dllist **stack_b)
{
    *stack_a = ft_list_new();
    if (stack_a == NULL)
        return (1);
    *stack_b = ft_list_new();
    if (stack_b == NULL)
    {
        ft_list_destroy(*stack_a);
        return (1);
    }
    return (0);
}

