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
		{
			printf("wtf\n");
			return (*is_overflow = true);
		}
		printf("wtf1\n");
		++nptr;
	}
	if (*nptr != '\0')
		return (*is_overflow = true);
	return ((int)res * op);
}
