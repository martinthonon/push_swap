//#include "push_swap.h"
#include "../../includes/push_swap.h"

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
	while (ft_isdigit(*nptr) == true)
	{
		res = res * 10 + *nptr - '0';
		if (op * res < INT_MIN || op * res > INT_MAX)
		{
			return (*is_overflow = true);
		}
		++nptr;
	}
	return ((int)res * op);
}
