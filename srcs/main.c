/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <mathonon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:49:30 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 18:30:35 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_dllist	*stack_a;
	t_dllist	*stack_b;
	bool		init_status;

	if (argc < 2 || ft_container_init(&stack_a, &stack_b) == true)
		return (1);
	if (argc == 2)
		init_status = ft_list_init(ft_split(argv[1], ' '), stack_a, true);
	else
		init_status = ft_list_init(++argv, stack_a, false);
	if (init_status == true)
	{
		write(2, ERROR, 6);
		ft_list_destroy(stack_a, stack_b);
		return (1);
	}
	ft_sort(stack_a, stack_b);
	ft_list_destroy(stack_a, stack_b);
	return (0);
}
