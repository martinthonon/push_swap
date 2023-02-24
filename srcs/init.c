#include "push_swap.h"

static int ft_init_stack_a(t_stack *stack_a, const char **argv)
{
				stack_a->size = 0;
				while (*(++argv))
				{
								ft_lstadd_back(&stack_a->head, ft_lstnew(ft_atoi(*argv)));
								++stack_a->size;
				}
				return (0);
}


int ft_init(t_stack *stack_a, const char **argv)
{
				if	(ft_init_stack_a(stack_a, argv))
								return (1);
				printf("test\n");
//				while (stack_a->head->content)
//				{
//								printf("->%d\n", stack_a->head->content);
//								if (stack_a->head->next == NULL)
//												break;
//								stack_a->head = stack_a->head->next;
//
//				}

				return (0);
}
