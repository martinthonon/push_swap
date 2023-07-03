/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_flow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:33:46 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 16:34:16 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_flow(char *nptr, int *is_overflow)
{
	char				op;
	long				res;

	op = 1;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		++nptr;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			op = -1;
		++nptr;
	}
	res = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		if (op * res < INT_MIN || op * res > INT_MAX)
			return (*is_overflow = true);
		++nptr;
	}
	if (*nptr != '\0')
		return (*is_overflow = true);
	return ((int)res * op);
}
