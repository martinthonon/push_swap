.DELETE_ON_ERROR:

NAME:=	push_swap

BUILD_DIR:= build
SRCS_DIR:= srcs

SRCS_PUSH_SWAP:=	main \
					list/list_add_back \
					list/list_add_front \
					list/list_destroy \
					list/list_empty \
					list/list_new \
					operation/push \
					operation/reverse_rotate \
					operation/rotate \
					operation/swap \
					sort/merge_sort \
					sort/sort_small_list \
					sort/sort \
					sort/sorting
					utils/atoi_flow \
					utils/container_init \
					utils/list_init \
					utils/sorted

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
