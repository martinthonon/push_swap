#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "../lib/libft/libft.h"

# define ERROR "Error\n"

typedef struct s_dllist_node 
{
	struct s_dllist_node *prev;
	struct s_dllist_node *next;
	int val;
}				t_dllist_node;

typedef struct s_dllist
{
	t_dllist_node *sentinel_node;
}				t_dllist;

enum e_boolean {
	false,
	true
};

int ft_checker(char **dptr);
t_dllist *ft_init(char **dptr);

t_dllist *ft_list_new();
void ft_list_destroy(t_dllist *struct_sentinel);
t_dllist_node *ft_list_add_back(t_dllist_node *sentinel, int content);

#endif
