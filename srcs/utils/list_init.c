#include "push_swap.h"

t_dllist *ft_init(char **dptr);
static bool ft_checker(char **dptr);
static t_dllist *ft_fill_list(char **dptr);
static bool ft_check_doubles(t_dllist_node *node, int to_find);
//static bool ft_check_doubles(t_dllist *stack_content);

t_dllist *ft_list_init(char **dptr)
{
    t_dllist *struct_sentinel;
    int i;
    int content;
    bool is_overflow;

    if (dptr == NULL)
        return (NULL);
    struct_sentinel = ft_list_new();
    if (struct_sentinel != NULL)
    {
        while (dptr[++i] != NULL)
        {
            content = ft_atoi_flow(dptr[i], is_overflow);
            if (is_overflow == true 
            || ft_check_doubles(struct_sentinel->sentinel_node, content) == true 
            || ft_list_add_back(struct_sentinel->sentinel_node, content) == NULL)
                return (NULL);
        }
    }
    return (struct_sentinel)
    

    // t_dllist *struct_sentinel;

    // if (dptr == NULL || ft_checker(dptr) == true)
    //     return (NULL);
    // struct_sentinel = ft_fill_list(dptr);
    // if (struct_sentinel == NULL ||ft_check_doubles(struct_sentinel) == true)
    //     return (NULL);      
    // return (struct_sentinel);
}

// static bool ft_checker(char **dptr)
// {
// 	int i;
// 	int j;
//     int boulean;

// 	i = -1;
// 	while (dptr[++i] != NULL)
// 	{
// 		j = -1;
// 		while (dptr[i][++j])
//             if (ft_isdigit(dptr[i][j]) == false && dptr[i][j] != '-')
// 				return (1);
// 	}
//     i = -1;
//     boulean = false;
//     while (dptr[++i] != NULL)
//     {
//         ft_atoi_flow(dptr[i], &boulean);
//         if (boulean == true)
//             return (1);
//     }
// 	return (0);
// }

// static t_dllist *ft_fill_list(char **dptr)
// {
//     t_dllist *struct_sentinel;
//     t_dllist_node *new_node;
//     int i;

//     struct_sentinel = ft_list_new();
//     if (struct_sentinel == NULL)
//         return (struct_sentinel);
//     i = -1;
//     while (dptr[++i] != NULL)
//     {
//         new_node = ft_list_add_back(struct_sentinel->sentinel_node, ft_atoi_flow(dptr[i], NULL));
//         if (new_node == NULL)
//         {
//             ft_list_destroy(struct_sentinel);
//             return (struct_sentinel);
//         }
//         ++struct_sentinel->size;
//     }
//     return (struct_sentinel);
// }

static bool ft_check_doubles(t_dllist_node *sentinel_node, int to_find)
{


//     t_dllist_node *sentinel_node;
//     t_dllist_node *next_node;
//     t_dllist_node *tmp_node;
    
//     sentinel_node = stack_content->sentinel_node;
//     next_node = sentinel_node->next;
//     while (next_node != sentinel_node)
//     {
//         tmp_node = next_node->next;
//         while (tmp_node != sentinel_node)
//         {
//             if (tmp_node->content == next_node->content)
//                 return (1);
//             tmp_node = tmp_node->next;
//         }
//         next_node = next_node->next;
//     }
//     return (0);
}