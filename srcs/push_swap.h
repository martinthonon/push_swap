#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "../lib/libft/libft.h"

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

int main(int argc, const char **argv);

int ft_checker(const char **dptr);
int ft_init(t_dllist *stack_a, const char **argv);

t_dllist *ft_list_new();
t_dllist_node *ft_list_add_back(t_dllist_node *sentinel, int content);

#endif
