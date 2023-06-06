#include "push_swap.h"

t_dllist *ft_init(char **dptr)
{
    t_dllist *struct_sentinel;
    t_dllist_node *new_node;
    int content;
    int i;

    struct_sentinel = ft_list_new();
    if (struct_sentinel == NULL)
        return (struct_sentinel);
    i = 0;
    while (dptr[++i] != NULL)
    {
        content = ft_atoi(dptr[i]);
        new_node = ft_list_add_back(struct_sentinel->sentinel_node, content);
        if (new_node == NULL)
        {
            ft_list_destroy(struct_sentinel);
            return (struct_sentinel);
        }
    }
    return (struct_sentinel);
}

        // printf("new_node  : %p\n", new_node);
        // printf("value     : %d\n", new_node->val);
        // printf("prev_node : %p\n", new_node->prev);
        // printf("next_node : %p\n\n", new_node->next);

        // t_dllist_node *head = stack_a->sentinel_node;
		// printf("node  : %p\n", stack_a);
		// head->val = 42;
		// head = head->prev;
		// while (head->val != 42) {
		// 	printf("y : %d\n", head->val);
		// 	head = head->prev;
		//}
