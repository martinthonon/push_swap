#include "push_swap.h"

void ft_sort_small_list(t_dllist *stack_a, t_dllist *stack_b){

    t_dllist_node *sentinel;
    t_dllist_node *node;
    (void)stack_b;
    sentinel = stack_a->sentinel_node;
    node = sentinel->next;
    while (node != sentinel) {
        printf("prev : %d, next : %d \n", sentinel->prev->content, sentinel->next->content);
        if (sentinel->prev->content < sentinel->next->content) {
            ft_rra(stack_a);
        }
        else if (sentinel->next->content > sentinel->next->next->content) {
            ft_sa(stack_a);
        }
        node = node->next;
    }
}