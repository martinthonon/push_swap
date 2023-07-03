/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <mathonon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:35:59 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 18:41:25 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_val(t_dllist *struct_sentinel);
int	ft_min_val(t_dllist *struct_sentinel);

int	ft_max_val(t_dllist *struct_sentinel)
{
	t_dllist_node	*first_node;
	int				max_val;

	first_node = struct_sentinel->sentinel_node->next;
	max_val = first_node->content;
	while (first_node != struct_sentinel->sentinel_node)
	{
		if (first_node->content > max_val)
			max_val = first_node->content;
		first_node = first_node->next;
	}
	return (max_val);
}

int	ft_min_val(t_dllist *struct_sentinel)
{
	t_dllist_node	*first_node;
	int				min_val;

	first_node = struct_sentinel->sentinel_node->next;
	min_val = first_node->content;
	while (first_node != struct_sentinel->sentinel_node)
	{
		if (first_node->content < min_val)
			min_val = first_node->content;
		first_node = first_node->next;
	}
	return (min_val);
}
