#include "push_swap.h"

void ft_sort(t_dllist *stack_a, t_dllist *stack_b);

void ft_sort(t_dllist *stack_a, t_dllist *stack_b)
{
    while (ft_list_empty(stack_b->sentinel_node) == false || ft_sorted(stack_a->sentinel_node, stack_a->sentinel_node->next) == false)
    {
        if (stack_a->size <= 6)
            ft_sort_small_list(stack_a);

        for (t_dllist_node *node = stack_a->sentinel_node->next; node != stack_a->sentinel_node; node = node->next) {
            printf("node : %p, content : %d \n", node, node->content);
            //printf("%d ", node->content);
        }
        printf("\n");
        //break;
    }

    printf("sorted\n");
}