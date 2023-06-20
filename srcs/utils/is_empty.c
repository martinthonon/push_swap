#include "push_swap.h"

bool ft_is_empty(t_dllist_node *sentinel)
{
    return (sentinel == sentinel->next);
}
