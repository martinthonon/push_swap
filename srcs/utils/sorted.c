#include "../../includes/push_swap.h"

int ft_sorted(t_dllist_node *sentinel, t_dllist_node *sentinel_next)
{
    while (sentinel_next->next != sentinel)
    {
        if (sentinel_next->content > sentinel_next->next->content)
            return (0);
        sentinel_next = sentinel_next->next;
    }
    return (1);
}