#include "push_swap.h"

int ft_init(t_dllist *stack_a, const char **argv)
{
    t_dllist_node *new_node;
    int i;
    int content;

    stack_a = ft_list_new();
    printf("p1 : %p\n", stack_a->sentinel_node);
    if (stack_a == NULL)
        return (1);
    i = 0;
    while (argv[++i] != NULL)
    {
        content = ft_atoi(argv[i]);
        new_node = ft_list_add_back(stack_a->sentinel_node, content);
        printf("new_node  : %p\n", new_node);
        printf("value     : %d\n", new_node->val);
        printf("prev_node : %p\n", new_node->prev);
        printf("next_node : %p\n\n", new_node->next);
        if (new_node == NULL)
            return (1);
    }
    t_dllist_node *head = stack_a->sentinel_node;
    head->val = 42;
    head = head->prev;
    while (head->val != 42) {
        printf("w : %d\n", head->val);
        head = head->prev;
    }
    return (0);
}
