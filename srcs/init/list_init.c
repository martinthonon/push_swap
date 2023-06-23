#include "push_swap.h"

bool ft_list_init(char **dptr, t_dllist *stack_a);
static bool ft_check_doubles(t_dllist_node *sentinel_node, int to_find);


bool ft_list_init(char **dptr, t_dllist *stack_a)
{
    t_dllist_node *sentinel_node;
    int i;
    int content;
    int is_overflow;

    if (dptr == NULL)
        return (1);
    sentinel_node = stack_a->sentinel_node;
    i = -1;
    while (dptr[++i] != NULL)
    {
        content = ft_atoi_flow(dptr[i], &is_overflow);
        if (is_overflow == true || ft_check_doubles(sentinel_node, content) == true || ft_list_add_back(sentinel_node, content) == NULL) {
            ft_list_destroy(stack_a);
            return (1);
        }
        ++stack_a->size;
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
