SOURCE	=	push_swap.c list.c ft_atol.c handle_error.c check_order.c \
			small_sort.c find_highest.c sort_util.c find_smallest.c \
			big_sort.c \

SRCS_DIR= src

SRCS	= $(addprefix $(SRCS_DIR)/, $(SOURCE))

MAKEFLAGS += --no-print-directory

CC = cc

RM = rm -rf
#dont forget to remove -g flag

CFLAGS = -g -Wall -Wextra -Werror -I include

DEF_COLOR = \e[1;39m
RESET = \e[0m
GRAY = \e[1;90m
RED = \e[1;91m
YELLOW = \e[1;93m
GREEN = \e[1;92m
BLUE = \e[1;94m
MAGENTA = \e[1;95m
CYAN = \e[1;96m
WHITE = \e[1;97m
BLINK = \e[5m

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	@make -C ft_printf
	@echo "$(CYAN)█▀█ █ █ █▀ █ █ ▄▄ █▀ █ █ █ ▄▀█ █▀█"
	@echo "$(CYAN)█▀▀ █▄█ ▄█ █▀█    ▄█ ▀▄▀▄▀ █▀█ █▀▀"
	@$(CC) $(CFLAGS) $(OBJS) ft_printf/libftprintf.a -o $(NAME)
	@echo "$(GREEN)✔ $(MAGENTA)created $(GREEN)./push_swap $(MAGENTA)succesfully!"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(WHITE)· $(YELLOW)compiling file: $(BLINK)○$(RESET)"

clean:
	@make -C ft_printf clean
	@$(RM) $(OBJS)

fclean:
	@make -C ft_printf fclean
	@$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all fclean clean re
