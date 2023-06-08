NAME		= push_swap

FILES		= main \
				utils/utils \
				init/init \
				list/list_new \
				list/list_add_back \
				list/list_destroy \
				sort/sort

SRCS		= $(addprefix srcs/, $(addsuffix .c, $(FILES)))

OBJS		= ${SRCS:.c=.o}

LIBFT		= lib/libft/libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

SANITIZE	= -fsanitize=address -g -O1 -fno-omit-frame-pointer

RM			= rm -f

.c.o :
			$(CC) $(CFLAGS) $(SANITIZE) -c $< -o $@

$(NAME): $(OBJS_DIR) $(OBJS)
			make bonus -C lib/libft
			$(CC) $(CFLAGS) $(SANITIZE) $(OBJS) -o $(NAME) $(LIBFT)

all : $(NAME)

clean:
			make fclean -C lib/libft
			rm -f $(OBJS)

fclean: clean
			$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
