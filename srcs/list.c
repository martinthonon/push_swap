#include "push_swap.h"

t_dllist *ft_list_new()
{
    t_dllist *struct_sentinel;
    t_dllist_node *sentinel_node;

    struct_sentinel = malloc(sizeof(t_dllist));
    if (struct_sentinel == NULL)
        return (struct_sentinel);
    sentinel_node = malloc(sizeof(t_dllist_node));
    if (sentinel_node == NULL)
    {
        free(struct_sentinel);
        return (struct_sentinel);
    }
    struct_sentinel->sentinel_node = sentinel_node;
    sentinel_node->prev = sentinel_node;
    sentinel_node->next = sentinel_node;
    return (struct_sentinel);
}

void ft_list_destroy(t_dllist *struct_sentinel)
{
    t_dllist_node *sentinel_node_cpy;
    t_dllist_node *node_tmp;

    sentinel_node_cpy = struct_sentinel->sentinel_node;
    sentinel_node_cpy = sentinel_node_cpy->next;
    while (sentinel_node_cpy != struct_sentinel->sentinel_node)
    {
        node_tmp = sentinel_node_cpy;
        sentinel_node_cpy = sentinel_node_cpy->next;
        free(node_tmp);
    }
    free(sentinel_node_cpy);
    free(struct_sentinel);
}

t_dllist_node *ft_list_add_back(t_dllist_node *sentinel_node, int content)
{
    t_dllist_node *new_node;
    t_dllist_node *prev_node;

    prev_node = sentinel_node->prev;
    new_node = malloc(sizeof(t_dllist_node));
    if (new_node == NULL)
        return (new_node);
    new_node->val = content;
    new_node->prev = prev_node;
    new_node->next = sentinel_node;
    sentinel_node->prev = new_node;
    prev_node->next = new_node;

    return (new_node);
}