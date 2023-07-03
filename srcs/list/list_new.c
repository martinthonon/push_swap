/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:06:28 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 16:08:45 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dllist	*ft_list_new(void);

t_dllist	*ft_list_new(void)
{
	t_dllist		*struct_sentinel;
	t_dllist_node	*sentinel_node;

	struct_sentinel = malloc(sizeof(t_dllist));
	if (struct_sentinel == NULL)
		return (NULL);
	sentinel_node = malloc(sizeof(t_dllist_node));
	if (sentinel_node == NULL)
	{
		free(struct_sentinel);
		return (NULL);
	}
	struct_sentinel->sentinel_node = sentinel_node;
	sentinel_node->prev = sentinel_node;
	sentinel_node->next = sentinel_node;
	struct_sentinel->size = 0;
	return (struct_sentinel);
}
