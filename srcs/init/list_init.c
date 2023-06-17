//#include "push_swap.h"
#include "../../includes/push_swap.h"

bool ft_list_init(char **dptr, t_dllist_node *sentinel_node);
static bool ft_check_doubles(t_dllist_node *sentinel_node, int to_find);


bool ft_list_init(char **dptr, t_dllist_node *sentinel_node)
{
    int i;
    int content;
    int is_overflow;

    if (dptr == NULL)
        return (1);
    i = -1;
    while (dptr[++i] != NULL)
    {
        content = ft_atoi_flow(dptr[i], &is_overflow);
        if (is_overflow == true || ft_check_doubles(sentinel_node, content) == true || ft_list_add_back(sentinel_node, content) == NULL)
            return (1);
    }
    return (0);
}



static bool ft_check_doubles(t_dllist_node *sentinel_node, int to_find)
{
    t_dllist_node *next_node;

    next_node = sentinel_node->next;
    while (next_node != sentinel_node)
    {
        if (next_node->content == to_find)
            return (1);
        next_node = next_node->next;
    }
    return (0);
}