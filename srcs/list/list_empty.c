#include "push_swap.h"

bool ft_list_empty(t_dllist_node *sentinel)
{
    return (sentinel == sentinel->next);
}