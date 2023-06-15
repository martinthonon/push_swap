# NAME		= push_swap

#  FILES		= main \
# 				utils/atol \
# 				utils/sorted \
# 				init/init \
# 				list/list_new \
# 				list/list_add_back \
# 				list/list_add_front \
# 				list/list_destroy \
# 				list/list_empty \
# 				operation/push \
# 				operation/reverse_rotate \
# 				operation/rotate \
# 				operation/swap \
# 				sort/sort

# SRCS		= $(addprefix srcs/, $(addsuffix .c, $(FILES)))

# OBJS		= ${SRCS:.c=.o}

# LIBFT		= lib/libft/libft.a

# CC			= gcc

# CFLAGS		= -Wall -Wextra -Werror

# SANITIZE	= -fsanitize=address -g -O1 -fno-omit-frame-pointer

# RM			= rm -f

# .c.o :
# 			$(CC) $(CFLAGS) $(SANITIZE) -c $< -o $@

# $(NAME): $(OBJS_DIR) $(OBJS)
# 			make bonus -C lib/libft
# 			$(CC) $(CFLAGS) $(SANITIZE) $(OBJS) -o $(NAME) $(LIBFT)

# all : $(NAME)

# clean:
# 			make fclean -C lib/libft
# 			rm -f $(OBJS)

# fclean: clean
# 			$(RM) $(NAME)

# re:	fclean all

# .PHONY:	all clean fclean re


.DELETE_ON_ERROR:

NAME:=	push_swap

BUILD_DIR:= build
SRCS_DIR:= srcs

SRCS_PUSH_SWAP:=	 main \
				utils/atol \
				utils/sorted \
				init/init \
				list/list_new \
				list/list_add_back \
				list/list_add_front \
				list/list_destroy \
				list/list_empty \
				operation/push \
				operation/reverse_rotate \
				operation/rotate \
				operation/swap \
				sort/sort \
				sort/sort_small_list

SRCS:=	${addprefix ${SRCS_DIR}/, ${addsuffix .c, ${SRCS_PUSH_SWAP}}}

OBJS:=	${SRCS:%.c=${BUILD_DIR}/%.o}

DEPS:=	${OBJS:.o=.d}

LIBFT:=	libs/libft/libft.a
CFLAGS:= -Wall -Wextra -Werror

INC_DIRS:= includes libs/libft

CPPFLAGS:= ${addprefix -I,${INC_DIRS}} -MMD -MP

LIB_DIR:= libs/libft
LDFLAGS:= ${addprefix -L,${LIB_DIR}}
LDLIBS:= -lft

RM:=	rm -rf

all: ${NAME}

${NAME}: ${OBJS} ${LIBFT}
	${CC} ${LDFLAGS} ${OBJS} ${LDLIBS} -o $@

${LIBFT}:
	${MAKE} -C ${dir ${LIBFT}}

${BUILD_DIR}/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	${MAKE} clean -C ${dir ${LIBFT}}
	${RM} ${BUILD_DIR}

fclean: clean
	${RM} ${LIBFT}
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re

-include ${DEPS}
