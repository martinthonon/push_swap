/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:04:48 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 16:06:20 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_list_destroy(t_dllist *stack_a, t_dllist *stack_b);
void	ft_list_clear(t_dllist *struct_sentinel);

void	ft_list_destroy(t_dllist *stack_a, t_dllist *stack_b)
{
	ft_list_clear(stack_a);
	ft_list_clear(stack_b);
}

void	ft_list_clear(t_dllist *struct_sentinel)
{
	t_dllist_node	*sentinel_node_cpy;
	t_dllist_node	*node_tmp;

	sentinel_node_cpy = struct_sentinel->sentinel_node;
	sentinel_node_cpy = sentinel_node_cpy->next;
	while (sentinel_node_cpy != struct_sentinel->sentinel_node)
	{
		node_tmp = sentinel_node_cpy;
		sentinel_node_cpy = sentinel_node_cpy->next;
		free(node_tmp);
	}
	free(sentinel_node_cpy);
	free(struct_sentinel);
}
