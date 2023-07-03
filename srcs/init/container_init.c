/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   container_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:52:04 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 15:53:16 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_container_init(t_dllist **stack_a, t_dllist **stack_b);

bool	ft_container_init(t_dllist **stack_a, t_dllist **stack_b)
{
	*stack_a = ft_list_new();
	if (stack_a == NULL)
		return (true);
	*stack_b = ft_list_new();
	if (stack_b == NULL)
	{
		ft_list_clear(*stack_a);
		return (true);
	}
	return (false);
}
