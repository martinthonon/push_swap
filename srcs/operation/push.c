/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:10:49 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 16:14:02 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_pa(t_dllist *stack_a, t_dllist *stack_b);
void		ft_pb(t_dllist *stack_a, t_dllist *stack_b);
static void	ft_push(t_dllist *to_push, t_dllist *target);

void	ft_pa(t_dllist *stack_a, t_dllist *stack_b)
{
	ft_push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	ft_pb(t_dllist *stack_a, t_dllist *stack_b)
{
	ft_push(stack_a, stack_b);
	write(1, "pb\n", 3);
}

static void	ft_push(t_dllist *to_push, t_dllist *target)
{
	t_dllist_node	*to_push_node;
	t_dllist_node	*target_node;
	t_dllist_node	*new_next_node;

	to_push_node = to_push->sentinel_node->next;
	target_node = target->sentinel_node;
	new_next_node = to_push_node->next;
	to_push_node->prev = target_node;
	to_push_node->next = target_node->next;
	to_push_node->next->prev = to_push_node;
	target_node->next = to_push_node;
	new_next_node->prev = to_push->sentinel_node;
	to_push->sentinel_node->next = new_next_node;
}
