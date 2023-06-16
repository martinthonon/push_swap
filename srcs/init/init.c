#include "push_swap.h"

t_dllist *ft_init(char **dptr);
static int ft_checker(char **dptr);
static t_dllist *ft_fill_list(char **dptr);
//static int ft_check_doubles(t_dllist *stack_content);

t_dllist *ft_init(char **dptr)
{
    t_dllist *stack_content;

    if (dptr == NULL || ft_checker(dptr) == true) {
        printf("yep\n");
        return (NULL);
    }
    stack_content = ft_fill_list(dptr);
    // if (ft_check_doubles(stack_content) == true) {
    //     printf("yepp\n");
    //     return (NULL);
    // }
        
    return (stack_content);
}

static int ft_checker(char **dptr)
{
	int i;
	int j;
    int boulean;

	i = -1;
	while (dptr[++i] != NULL)
	{
		j = -1;
		while (dptr[i][++j])
            if (ft_isdigit(dptr[i][j]) == false && dptr[i][j] != '-')
				return (1);
	}
    i = -1;
    boulean = false;
    while (dptr[++i] != NULL)
    {
        ft_atoi_flow(dptr[i], &boulean);
        printf("%d\n", boulean);
        if (boulean == true)
            return (1);
    }
	return (0);
}

static t_dllist *ft_fill_list(char **dptr)
{
    t_dllist *struct_sentinel;
    t_dllist_node *new_node;
    int i;

    struct_sentinel = ft_list_new();
    if (struct_sentinel == NULL)
        return (struct_sentinel);
    i = -1;
    while (dptr[++i] != NULL)
    {
        new_node = ft_list_add_back(struct_sentinel->sentinel_node, ft_atoi_flow(dptr[i], NULL));
        if (new_node == NULL)
        {
            ft_list_destroy(struct_sentinel);
            return (struct_sentinel);
        }
        ++struct_sentinel->size;
    }
    return (struct_sentinel);
}

// static int ft_check_doubles(t_dllist *stack_content)
// {
//     t_dllist_node *sentinel_node;
//     t_dllist_node *next_node;
    
//     sentinel_node = stack_content->sentinel_node;
//     next_node = sentinel_node->next;
//     while (next_node->next != sentinel_node)
//     {
//         sentinel_node->content = next_node->content;
//         while (next_node->next->content != sentinel_node->content)
//             next_node = next_node->next;
//         if (next_node->next != sentinel_node)
//             return (1);
//         next_node = next_node->next;
//     }
//     return (0);
// }

