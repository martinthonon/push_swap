#include "push_swap.h"

int ft_get_max_val(t_dllist *stack_a);
int ft_get_min_val(t_dllist *stack_a);

int ft_get_max_val(t_dllist *stack_a)
{
    t_dllist_node *first_node;
    int max_val;

    first_node = stack_a->sentinel_node->next;
    max_val = first_node->content;
    while (first_node != stack_a->sentinel_node)
    {
        if (first_node->content > max_val)
            max_val = first_node->content;
        first_node = first_node->next;
    }
    return (max_val);
}

int ft_get_min_val(t_dllist *stack_a)
{
    t_dllist_node *first_node;
    int min_val;

    first_node = stack_a->sentinel_node->next;
    min_val = first_node->content;
    while (first_node != stack_a->sentinel_node)
    {
        if (first_node->content < min_val)
            min_val = first_node->content;
        first_node = first_node->next;
    }
    return (min_val);
}