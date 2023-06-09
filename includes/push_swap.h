#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "../lib/libft/libft.h"

# define ERROR "Error\n"

typedef struct s_dllist_node 
{
	struct s_dllist_node *prev;
	struct s_dllist_node *next;
	int content;
}				t_dllist_node;

typedef struct s_dllist
{
	t_dllist_node *sentinel_node;
	int size;
}				t_dllist;

enum e_boolean
{
	false,
	true
};

//sort
void ft_sort(t_dllist *stack_a, t_dllist *stack_b);

//init
t_dllist *ft_init(char **dptr);

//list
t_dllist *ft_list_new();
t_dllist_node *ft_list_add_back(t_dllist_node *sentinel, long content);
void ft_list_destroy(t_dllist *struct_sentinel);

//utils
long	ft_atol(char *nptr);
int ft_sorted(t_dllist_node *sentinel, t_dllist_node *sentinel_next);
#endif
