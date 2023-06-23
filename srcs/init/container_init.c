#include "push_swap.h"

bool ft_container_init(t_dllist **stack_a, t_dllist **stack_b);

bool ft_container_init(t_dllist **stack_a, t_dllist **stack_b)
{
    *stack_a = ft_list_new();
    if (stack_a == NULL)
        return (true);
    *stack_b = ft_list_new();
    if (stack_b == NULL)
    {
        ft_list_clear(*stack_a);
        return (true);
    }
    return (false);
}
