/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <mathonon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:14:16 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 18:43:00 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sa(t_dllist *stack_a);
void		ft_sb(t_dllist *stack_b);
void		ft_ss(t_dllist *stack_a, t_dllist *stack_b);
static void	ft_swap(t_dllist *to_swap);

void	ft_sa(t_dllist *stack_a)
{
	ft_swap(stack_a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_dllist *stack_b)
{
	ft_swap(stack_b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_dllist *stack_a, t_dllist *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	write(1, "ss\n", 3);
}

static void	ft_swap(t_dllist *swap)
{
	t_dllist_node	*sentinel_node;
	int				first_content;

	sentinel_node = swap->sentinel_node;
	first_content = sentinel_node->next->content;
	sentinel_node->next->content = sentinel_node->next->next->content;
	sentinel_node->next->next->content = first_content;
}
