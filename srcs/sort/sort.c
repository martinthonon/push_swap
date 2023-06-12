#include "../../includes/push_swap.h"

void ft_sort(t_dllist *stack_a, t_dllist *stack_b);

void ft_sort(t_dllist *stack_a, t_dllist *stack_b)
{
    (void)stack_b;
    while (ft_sorted(stack_a->sentinel_node, stack_a->sentinel_node->next) != false)
    {
        printf("Not sorted yet\n");
    }
    printf("sorted\n");
}