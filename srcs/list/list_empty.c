#include "../../includes/push_swap.h"

int ft_list_empty(t_dllist_node *sentinel)
{
    return (sentinel == sentinel->next);

    //1 = empty
    //0 = full
}