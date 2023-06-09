#include "../../includes/push_swap.h"

void ft_sort(t_dllist *stack_a, t_dllist *stack_b);

void ft_sort(t_dllist *stack_a, t_dllist *stack_b)
{
    (void)stack_b;
    if (stack_a->size == 3)
        ft_sort3(stack_a);
    else if (stack_a->size == 5)
        ft_sort5(stack_a);
    while (ft_sorted(stack_a->sentinel_node, stack_a->sentinel_node->next) != false)
    {
        printf("Not sorted yet\n");
    }
    printf("sorted\n");
}