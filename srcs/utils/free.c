/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathonon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:40:12 by mathonon          #+#    #+#             */
/*   Updated: 2023/07/03 18:40:36 by mathonon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_free(const char *formats, ...);

int	ft_free(const char *formats, ...)
{
	va_list	ap;
	int		i;
	void	**dptr;

	va_start(ap, formats);
	while (*formats != '\0')
	{
		if (*formats == '%')
		{
			++formats;
			if (*formats == 'p')
				free(va_arg(ap, void *));
			else if (*formats == 'P')
			{
				dptr = va_arg(ap, void **);
				i = 0;
				while (dptr[i] != NULL)
					free(dptr[i++]);
				free(dptr);
			}
		}
		++formats;
	}
	va_end(ap);
	return (0);
}
