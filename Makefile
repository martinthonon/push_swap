.DELETE_ON_ERROR:

NAME:= push_swap

BUILD_DIR:= build
SRCS_DIR:= srcs

SRCS_PUSH_SWAP:= main \
				init/container_init \
				init/list_init \
				list/list_add_back \
				list/list_destroy \
				list/list_new \
				list/list_size \
				operation/push \
				operation/reverse_rotate \
				operation/rotate \
				operation/swap \
				sort/sort \
				utils/atoi_flow \
				utils/free \
				utils/is_empty \
				utils/is_sorted \
				utils/min_max

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