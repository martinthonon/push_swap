#include "../../includes/push_swap.h"

void ft_sort(t_dllist *stack_a, t_dllist *stack_b);

void ft_sort(t_dllist *stack_a, t_dllist *stack_b)
{
    while (ft_list_empty(stack_b->sentinel_node) == false && ft_sorted(stack_a->sentinel_node, stack_a->sentinel_node->next) == false)
    {

        // if (stack_a->size <= 5)
        //     ft_sort_small_list();
        printf("Not sorted yet\n");
    }

    printf("sorted\n");
}