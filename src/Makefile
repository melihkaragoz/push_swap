SRCS			= extended_utils.c ft_atoi.c ft_split.c prepare_utils.c \
	prepare.c push_swap.c rotate_utils.c sort_rotate.c sort_swap.c sort.c \
	split_utils.c swap_utils.c utils.c sort_push.c

OBJS			=	$(SRCS:.c=.o)

NAME			=	push_swap

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -rf

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
						$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
