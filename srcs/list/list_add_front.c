#include "../../includes/push_swap.h"

t_dllist_node *ft_list_add_front(t_dllist_node *sentinel, long content)
{
    t_dllist_node *new_node;
    t_dllist_node *next_node;


    next_node = sentinel->next;
    new_node = malloc(sizeof(t_dllist_node));
    if (new_node == NULL)
        return (new_node);
    new_node->content = content;
    new_node->prev = sentinel;
    new_node->next = next_node;
    sentinel->next = new_node;
    next_node->prev = new_node;
    return (new_node);
}