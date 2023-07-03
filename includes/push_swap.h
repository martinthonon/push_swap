/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:33:43 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 15:47:57 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdbool.h>
# include "libft.h"

# define ERROR "Error\n"

typedef struct s_dllist_node
{
	struct s_dllist_node	*prev;
	struct s_dllist_node	*next;
	int						content;
}				t_dllist_node;

typedef struct s_dllist
{
	t_dllist_node	*sentinel_node;
	int				size;
}				t_dllist;

//init
bool			ft_container_init(t_dllist **stack_a, t_dllist **stack_b);
bool			ft_list_init(char **dptr, t_dllist *struct_sentinel);
//list
t_dllist		*ft_list_new(void);
t_dllist_node	*ft_list_add_back(t_dllist_node *sentinel, int content);
size_t			ft_list_size(t_dllist *struct_sentinel);
void			ft_list_destroy(t_dllist *struct_sentinel_a,
					t_dllist *struct_sentinel_b);
void			ft_list_clear(t_dllist *struct_sentinel);
//operation
void			ft_pa(t_dllist *stack_a, t_dllist *stack_b);
void			ft_pb(t_dllist *stack_a, t_dllist *stack_b);

void			ft_sa(t_dllist *stack_a);
void			ft_sb(t_dllist *stack_b);
void			ft_ss(t_dllist *stack_a, t_dllist *stack_b);

void			ft_ra(t_dllist *stack_a);
void			ft_rb(t_dllist *stack_b);
void			ft_rr(t_dllist *stack_a, t_dllist *stack_b);

void			ft_rra(t_dllist *stack_a);
void			ft_rrb(t_dllist *stack_b);
void			ft_rrr(t_dllist *stack_a, t_dllist *stack_b);
//sort
void			ft_sort(t_dllist *stack_a, t_dllist *stack_b);
//utils
int				ft_atoi_flow(char *nptr, int *is_overflow);
int				ft_max_val(t_dllist *stack);
int				ft_min_val(t_dllist *stack);
bool			ft_is_empty(t_dllist_node *sentinel);
bool			ft_is_sorted(t_dllist_node *sentinel,
					t_dllist_node *sentinel_next);
#endif
