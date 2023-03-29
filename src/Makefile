SRCS			=	push_swap.c utils.c f_both.c f_rotate.c f_utils.c f_swap.c
LIBFT			=	../libft
OBJS			=	$(SRCS:.c=.o)
NAME			=	push_swap
CC				=	gcc
CFLAGS			=	-Wall -Wextra
RM				=	rm -rf

$(NAME):		$(OBJS) ft $(LIBFT)
				$(CC) $(CFLAGS) $(LIBFT)/libft.a $(OBJS) -o $(NAME)

all:			$(NAME) ft $(LIBFT)

ft:
				@make -C ../libft

clean:
				$(RM) $(OBJS)

fclean:			clean
						$(RM) $(NAME) $(LIBFT)/*.o

re:				fclean $(NAME)

.PHONY:			all clean fclean re
