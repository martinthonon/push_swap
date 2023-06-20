#include "push_swap.h"

void ft_rra(t_dllist *stack_a);
void ft_rrb(t_dllist *stack_b);
void ft_rrr(t_dllist *stack_a, t_dllist *stack_b);
static void ft_reverse_rotate(t_dllist *to_rotate);

void ft_rra(t_dllist *stack_a)
{
        ft_reverse_rotate(stack_a);
        write(1, "rra\n", 4);
}

void ft_rrb(t_dllist *stack_b)
{
        ft_reverse_rotate(stack_b);
        write(1, "rrb\n", 4);
}
void ft_rrr(t_dllist *stack_a, t_dllist *stack_b)
{
        ft_reverse_rotate(stack_a);
        ft_reverse_rotate(stack_b);
        write(1, "rrr\n", 4);
}

static void ft_reverse_rotate(t_dllist *to_rotate)
{
        t_dllist_node *to_rotate_node;
        t_dllist_node *pivot_node;
        t_dllist_node *new_prev_node;

        to_rotate_node = to_rotate->sentinel_node->prev;
        pivot_node = to_rotate->sentinel_node;
        new_prev_node = to_rotate_node->prev;


        to_rotate_node->prev = pivot_node;
        to_rotate_node->next = pivot_node->next;

        pivot_node->prev = new_prev_node;
        pivot_node->next = to_rotate_node;

        to_rotate_node->next->prev = to_rotate_node;
        new_prev_node->next = pivot_node;
}
