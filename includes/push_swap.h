#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft.h"

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

//init
t_dllist *ft_init(char **dptr);
//list
t_dllist *ft_list_new();
t_dllist_node *ft_list_add_back(t_dllist_node *sentinel, long content);
t_dllist_node *ft_list_add_front(t_dllist_node *sentinel, long content);
void ft_list_destroy(t_dllist *struct_sentinel);
int ft_list_empty(t_dllist_node *sentinel);
//operation
void ft_pa(t_dllist *stack_a, t_dllist *stack_b);
void ft_pb(t_dllist *stack_a, t_dllist *stack_b);

void ft_sa(t_dllist *stack_a);
void ft_sb(t_dllist *stack_b);
void ft_ss(t_dllist *stack_a, t_dllist *stack_b);

void ft_ra(t_dllist *stack_a);
void ft_rb(t_dllist *stack_b);
void ft_rr(t_dllist *stack_a, t_dllist *stack_b);

void ft_rra(t_dllist *stack_a);
void ft_rrb(t_dllist *stack_b);
void ft_rrr(t_dllist *stack_a, t_dllist *stack_b);

//sort
void ft_sort(t_dllist *stack_a, t_dllist *stack_b);
void ft_sort_small_list(t_dllist *stack_a);
//utils
long	ft_atol(char *nptr);
int ft_sorted(t_dllist_node *sentinel, t_dllist_node *sentinel_next);
#endif
