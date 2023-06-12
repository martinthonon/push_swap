#include "../../includes/push_swap.h"

void ft_sa(t_dllist *stack_a);
void ft_sb(t_dllist *stack_b);
void ft_ss(t_dllist *stack_a, t_dllist *stack_b);
static void ft_swap(t_dllist *to_swap);

void ft_sa(t_dllist *stack_a)
{
    ft_swap(stack_a);
    write(1, "sa\n", 3);
}

void ft_sb(t_dllist *stack_b)
{
    ft_swap(stack_b);
    write(1, "sb\n", 3);
}

void ft_ss(t_dllist *stack_a, t_dllist *stack_b)
{
    ft_sa(stack_a);
    ft_sb(stack_b);
    write(1, "ss\n", 3);
}

static void ft_swap(t_dllist *swap)
{
    t_dllist_node *sentinel_node;
    long content_prev;
    //swap content

}

    // t_dllist_node *sentinel_node;
    // t_dllist_node *swap_to_prev;
    // t_dllist_node *swap_to_next;
    // t_dllist_node *new_prev_node;
    // t_dllist_node *new_next_node;

    // sentinel_node = swap->sentinel_node;
    // swap_to_prev = sentinel_node->next;
    // swap_to_next = sentinel_node->prev;
    // new_prev_node = swap_to_next->prev;
    // new_next_node = swap_to_prev->next;

    // sentinel_node->prev = swap_to_prev;
    // sentinel_node->next = swap_to_next;

    // swap_to_prev->prev = new_prev_node;
    // swap_to_prev->next = sentinel_node;

    // swap_to_next->prev = sentinel_node;
    // swap_to_next->next = new_next_node;

    // new_prev_node->next = swap_to_prev;
    // new_next_node->prev = swap_to_next;
