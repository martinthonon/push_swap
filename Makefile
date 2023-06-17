# .DELETE_ON_ERROR:

# NAME:= push_swap

# BUILD_DIR:= build
# SRCS_DIR:= srcs

# SRCS_PUSH_SWAP:= main \
# 				init/container_init \
# 				init/list_init \
# 				list/list_add_back \
# 				list/list_destroy \
# 				list/list_new \
# 				operation/push \
# 				operation/reverse_rotate \
# 				operation/rotate \
# 				operation/swap \
# 				sort/merge_sort \
# 				sort/sort \
# 				sort/sorting \
# 				utils/atoi_flow \
# 				utils/is_empty \
# 				utils/is_sorted \

# SRCS:=	${addprefix ${SRCS_DIR}/, ${addsuffix .c, ${SRCS_PUSH_SWAP}}}

# OBJS:=	${SRCS:%.c=${BUILD_DIR}/%.o}

# DEPS:=	${OBJS:.o=.d}

# LIBFT:=	libs/libft/libft.a
# CFLAGS:= -Wall -Wextra -Werror -Wuninitialized -Winit-self -Wshadow -Wdouble-promotion -Wundef -fno-common -Wconversion -Os -g3 -O3 -fsanitize=address -g3 -O3 -fno-omit-frame-pointer

# INC_DIRS:= includes libs/libft

# CPPFLAGS:= ${addprefix -I,${INC_DIRS}} -MMD -MP

# LIB_DIR:= libs/libft
# LDFLAGS:= ${addprefix -L,${LIB_DIR}}
# LDLIBS:= -lft

# RM:=	rm -rf

# all: ${NAME}

# ${NAME}: ${OBJS} ${LIBFT}
# 	${CC} ${LDFLAGS} ${OBJS} ${LDLIBS} -o $@

# ${LIBFT}:
# 	${MAKE} -C ${dir ${LIBFT}}

# ${BUILD_DIR}/%.o: %.c
# 	mkdir -p $(dir $@)
# 	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

# clean:
# 	${MAKE} clean -C ${dir ${LIBFT}}
# 	${RM} ${BUILD_DIR}

# fclean: clean
# 	${RM} ${LIBFT}
# 	${RM} ${NAME}

# re: fclean all

# .PHONY:	all clean fclean re

# -include ${DEPS}
NAME		= push_swap

FILES		= main \
				init/container_init \
				init/list_init \
				list/list_add_back \
				list/list_destroy \
				list/list_new \
				operation/push \
				operation/reverse_rotate \
				operation/rotate \
				operation/swap \
				sort/merge_sort \
				sort/sort \
				sort/sorting \
				utils/atoi_flow \
				utils/is_empty \
				utils/is_sorted \

SRCS		= $(addprefix srcs/, $(addsuffix .c, $(FILES)))

OBJS		= ${SRCS:.c=.o}

LIBFT		= libs/libft/libft.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror -Wuninitialized -Winit-self -Wshadow -Wdouble-promotion -Wundef -fno-common -Wconversion -Os -g3 -O3

SANITIZE	= -fsanitize=address -g -O1 -fno-omit-frame-pointer

RM			= rm -f

.c.o :
			$(CC) $(CFLAGS) $(SANITIZE) -c $< -o $@

$(NAME): $(OBJS_DIR) $(OBJS)
			make bonus -C libs/libft
			$(CC) $(CFLAGS) $(SANITIZE) $(OBJS) -o $(NAME) $(LIBFT)

all : $(NAME)

clean:
			make fclean -C libs/libft
			rm -f $(OBJS)

fclean: clean
			$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re