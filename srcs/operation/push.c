#include "../../includes/push_swap.h"

void ft_pa(t_dllist *stack_a, t_dllist *stack_b);
void ft_pb(t_dllist *stack_a, t_dllist *stack_b);
static int ft_push(t_dllist_node *to_push, t_dllist_node *target);

void ft_pa(t_dllist *stack_a, t_dllist *stack_b)
{
    if (ft_push(stack_b->sentinel_node->next, stack_a->sentinel_node->next) != true)
        write(1, "pa\n", 3);
}

void ft_pb(t_dllist *stack_a, t_dllist *stack_b)
{
    if (ft_push(stack_a->sentinel_node->next, stack_b->sentinel_node->next) != true)
        write(1, "pb\n", 3);
}

static int ft_push(t_dllist_node *to_push, t_dllist_node *target)
{
    if (to_push != to_push->next && target != target->next)
    {
        ft_list_add_back()
    }
}