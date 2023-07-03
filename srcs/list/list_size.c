/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:09:00 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 16:10:03 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_list_size(t_dllist *struct_sentinel);

size_t	ft_list_size(t_dllist *struct_sentinel)
{
	t_dllist_node	*first_node;
	size_t			i;

	first_node = struct_sentinel->sentinel_node->next;
	i = 0;
	while (first_node != struct_sentinel->sentinel_node)
	{
		first_node = first_node->next;
		++i;
	}
	return (i);
}
