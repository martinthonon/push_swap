#include "../../includes/push_swap.h"

int ft_sorted(t_dllist_node *sentinel, t_dllist_node *sentinel_next)
{
    while (sentinel != sentinel_next->next)
    {
        if (sentinel_next->content > sentinel_next->next->content)
            return (1);
        sentinel_next = sentinel_next->next;
    }
    return (0);

}

    // if (sentinel != sentinel_next->next)
    // {
    //     if (sentinel_next->content > sentinel_next->next->content)
    //         return (1);
    //     return (ft_sorted(sentinel, sentinel_next->next));
    // }
    // printf("ok\n");
    // return (0);

        // while (sentinel != sentinel_next->next)
    // {
    //     if (sentinel_next->content > sentinel_next->next->content)
    //         return (1);
    //     sentinel_next = sentinel_next->next;
    // }
    // return (0);