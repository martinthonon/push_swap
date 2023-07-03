/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <mathonon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:34:59 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 18:35:01 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_is_sorted(t_dllist_node *sentinel, t_dllist_node *sentinel_next);

bool	ft_is_sorted(t_dllist_node *sentinel, t_dllist_node *sentinel_next)
{
	while (sentinel_next->next != sentinel)
	{
		if (sentinel_next->content > sentinel_next->next->content)
			return (false);
		sentinel_next = sentinel_next->next;
	}
	return (true);
}
