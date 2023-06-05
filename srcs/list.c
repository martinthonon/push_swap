#include "push_swap.h"

t_dllist *ft_list_new()
{
    t_dllist *sentinel;
    t_dllist_node *node;

    sentinel = malloc(sizeof(t_dllist));
    if (sentinel == NULL)
        return (sentinel);
    node = malloc(sizeof(t_dllist_node));
    if (node == NULL)
    {
        free(sentinel);
        return (sentinel);
    }
    sentinel->sentinel_node = node;
    node->prev = node;
    node->next = node;
    return (sentinel);
}

t_dllist_node *ft_list_add_back(t_dllist_node *sentinel, int content)
{
    t_dllist_node *new_node;
    t_dllist_node *prev_node;

    prev_node = sentinel->prev; //attention senti
    new_node = malloc(sizeof(t_dllist_node));
    if (new_node == NULL)
        return (new_node);
    new_node->val = content;
    new_node->prev = prev_node;
    new_node->next = sentinel;
    sentinel->prev = new_node;
    prev_node->next = new_node;

    return (new_node);
}