#include "../../includes/push_swap.h"

void ft_ra(t_dllist *stack_a);
void ft_rb(t_dllist *stack_b);
void ft_rr(t_dllist *stack_a, t_dllist *stack_b);
static void ft_rotate(t_dllist *to_rotate);

void ft_ra(t_dllist *stack_a)
{
    ft_rotate(stack_a);
    write(1, "ra\n", 3);
}

void ft_rb(t_dllist *stack_b)
{
    ft_rotate(stack_b);
    write(1, "rb\n", 3);
}

void ft_rr(t_dllist *stack_a, t_dllist *stack_b)
{
    ft_rotate(stack_a);
    ft_rotate(stack_b);
    write(1, "rr\n", 3);
}

static void ft_rotate(t_dllist *to_rotate)
{
    t_dllist_node *to_rotate_node;
    t_dllist_node *pivot_node;
    t_dllist_node *new_next_node;

    to_rotate_node = to_rotate->sentinel_node->next;
    pivot_node = to_rotate->sentinel_node;
    new_next_node = to_rotate_node->next;


    to_rotate_node->prev = pivot_node->prev;
    to_rotate_node->next = pivot_node;

    pivot_node->prev = to_rotate_node;
    pivot_node->next = new_next_node;

    new_next_node->prev = pivot_node;


}