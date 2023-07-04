/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <mathonon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:53:23 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/04 10:05:34 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool		ft_list_init(char **dptr, t_dllist *struct_sentinel, bool split);
static bool	ft_check_doubles(t_dllist_node *sentinel_node, int to_find);

bool	ft_list_init(char **dptr, t_dllist *struct_sentinel, bool split)
{
	t_dllist_node	*sentinel_node;
	int				i;
	int				content;
	bool			is_overflow;

	if (dptr == NULL)
		return (true);
	sentinel_node = struct_sentinel->sentinel_node;
	i = -1;
	is_overflow = false;
	while (dptr[++i] != NULL)
	{
		content = ft_atoi_flow(dptr[i], &is_overflow);
		if (is_overflow == true
			|| ft_check_doubles(sentinel_node, content) == true
			|| ft_list_add_back(sentinel_node, content) == NULL)
			return (true);
		++struct_sentinel->size;
	}
	if (split == true)
		ft_free("%P", dptr);
	return (false);
}

static bool	ft_check_doubles(t_dllist_node *sentinel_node, int to_find)
{
	t_dllist_node	*next_node;

	next_node = sentinel_node->next;
	while (next_node != sentinel_node)
	{
		if (next_node->content == to_find)
			return (true);
		next_node = next_node->next;
	}
	return (false);
}
