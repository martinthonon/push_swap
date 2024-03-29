/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <mathonon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:34:26 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 18:35:17 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_is_empty(t_dllist_node *sentinel);

bool	ft_is_empty(t_dllist_node *sentinel)
{
	return (sentinel == sentinel->next);
}
