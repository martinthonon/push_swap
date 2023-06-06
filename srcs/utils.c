#include "push_swap.h"

int ft_checker(char **dptr)
{
	int i;
	int j;

	i = 0;
	while (dptr[++i] != NULL)
	{
		j = -1;
		while (dptr[i][++j])
			if (!ft_isdigit(dptr[i][j]) && dptr[i][j] != '-')
				return (1);
	}
	return (0);
}

