SRCS = main.c

CC = cc

RM = rm -rf

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)
	
$(NAME): $(OBJS)
	
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all fclean clean re
