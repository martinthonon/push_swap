/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <mathonon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:23:17 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 18:41:19 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_sort(t_dllist *stack_a, t_dllist *stack_b);
static void	ft_sort_three(t_dllist *stack_a);
static void	ft_sort_five(t_dllist *stack_a, t_dllist *stack_b);
static void	ft_radix_sort(t_dllist *stack_a,
				t_dllist *stack_b, uint8_t byte_shift);

void	ft_sort(t_dllist *stack_a, t_dllist *stack_b)
{
	t_dllist_node	*sentinel_node_a;
	t_dllist_node	*sentinel_node_b;
	uint8_t			byte_shift;

	sentinel_node_a = stack_a->sentinel_node;
	sentinel_node_b = stack_b->sentinel_node;
	byte_shift = 0;
	while (byte_shift < 32 && (ft_is_empty(sentinel_node_b) == false
			|| ft_is_sorted(sentinel_node_a, sentinel_node_a->next) == false))
	{
		if (stack_a->size == 2)
			ft_ra(stack_a);
		else if (stack_a->size == 3)
			ft_sort_three(stack_a);
		else if (stack_a->size == 5)
			ft_sort_five(stack_a, stack_b);
		else
			ft_radix_sort(stack_a, stack_b, byte_shift++);
	}
	if (byte_shift > 31)
		exit(EXIT_FAILURE);
}

static void	ft_sort_three(t_dllist *stack_a)
{
	int	first;
	int	middle;
	int	last;

	first = stack_a->sentinel_node->next->content;
	middle = stack_a->sentinel_node->next->next->content;
	last = stack_a->sentinel_node->prev->content;
	if (first > middle && middle < last && last > first)
		ft_sa(stack_a);
	if (first > middle && middle > last && last < first)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	if (first > middle && middle < last && last < first)
		ft_ra(stack_a);
	if (first < middle && middle > last && last > first)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	if (first < middle && middle > last && last < first)
		ft_rra(stack_a);
}

static void	ft_sort_five(t_dllist *stack_a, t_dllist *stack_b)
{
	const int	max_val = ft_max_val(stack_a);
	const int	min_val = ft_min_val(stack_a);

	while (ft_list_size(stack_a) > 3)
	{
		if (stack_a->sentinel_node->next->content == min_val
			|| stack_a->sentinel_node->next->content == max_val)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a);
	}
	ft_sort_three(stack_a);
	if (stack_b->sentinel_node->next)
	{
		if (stack_b->sentinel_node->next->content
			> stack_b->sentinel_node->prev->content)
			ft_sb(stack_b);
		ft_pa(stack_a, stack_b);
		ft_pa(stack_a, stack_b);
		ft_ra(stack_a);
	}
}

static void	ft_radix_sort(t_dllist *stack_a,
				t_dllist *stack_b, uint8_t byte_shift)
{
	t_dllist_node	*first_node;
	int				i;

	first_node = stack_a->sentinel_node->next;
	i = -1;
	while (++i < stack_a->size)
	{
		if (((first_node->content >> byte_shift) & 1) == 1)
			ft_ra(stack_a);
		else
			ft_pb(stack_a, stack_b);
		first_node = stack_a->sentinel_node->next;
	}
	while (ft_is_empty(stack_b->sentinel_node) == false)
		ft_pa(stack_a, stack_b);
}
