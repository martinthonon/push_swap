#include "push_swap.h"

void ft_sort(t_dllist *stack_a, t_dllist *stack_b);

static void ft_radix_sort(t_dllist *stack_a, t_dllist *stack_b, uint8_t byte_shift);

void ft_sort(t_dllist *stack_a, t_dllist *stack_b)
{
    uint8_t byte_shift;
    int i;

    i = 0;
    byte_shift = 0;
    while (byte_shift <= 32 && (ft_is_empty(stack_b->sentinel_node) == false || ft_is_sorted(stack_a->sentinel_node, stack_a->sentinel_node->next) == false))
    {
        ft_radix_sort(stack_a, stack_b, byte_shift++);
        printf("byte shift : %d\n", byte_shift);
        ++i;

    }
    if (byte_shift > 32)
        exit(EXIT_FAILURE);
    printf("sorted in %d\n", i);
}

static void ft_radix_sort(t_dllist *stack_a, t_dllist *stack_b, uint8_t byte_shift)
{
    t_dllist_node *first_node;
    int i;
    first_node = stack_a->sentinel_node->next;
    i = -1;
    while (++i < stack_a->size)
    {
        if (((first_node->content >> byte_shift) & 1) == 1)
            ft_ra(stack_a);
        else
            ft_pb(stack_a, stack_b);
        first_node = stack_a->sentinel_node->next;
    }
    while (ft_is_empty(stack_b->sentinel_node) == false)
        ft_pa(stack_a, stack_b);
}


