#include "push_swap.h"

void ft_sort(t_dllist *stack_a, t_dllist *stack_b);

void ft_sort(t_dllist *stack_a, t_dllist *stack_b)
{
    int i;

    while (ft_is_empty(stack_b->sentinel_node) == false || ft_is_sorted(stack_a->sentinel_node, stack_a->sentinel_node->next) == false)
    {
        i = -1;
        while (++i < stack_a->size)
        {
            if ()
        }
    }
    printf("sorted\n");
}


