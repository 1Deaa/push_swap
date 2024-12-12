SOURCE	=	push_swap.c list.c ft_atol.c handle_error.c check_order.c \
			small_sort.c find_highest.c sort_util.c

SRCS_DIR= src

SRCS	= $(addprefix $(SRCS_DIR)/, $(SOURCE))

CC = cc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -I include

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)
	
$(NAME): $(OBJS)
	make -C ft_printf
	@$(CC) $(CFLAGS) $(OBJS) ft_printf/libftprintf.a -o $(NAME)
	@echo "PUSH_SWAP READY"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make -C ft_printf clean
	@$(RM) $(OBJS)

fclean:
	@make -C ft_printf fclean
	@$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all fclean clean re
