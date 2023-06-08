#include "../../includes/push_swap.h"
long	ft_atol(char *nptr);

long	ft_atol(char *nptr)
{
	char		op;
	long long	tmp;
	long long	res;

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
		tmp = res;
		res = res * 10 + *nptr - '0';
		if (res < tmp)
			return (-(op == 1));
		++nptr;
	}
	return (res * op);
}
