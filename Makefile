SRCS = push_swap.c list.c ft_atol.c handle_error.c check_order.c small_sort.c sa.c pa.c pb.c find_highest.c ra.c rra.c

CC = cc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)
	
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean:
	@$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all fclean clean re
