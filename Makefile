NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c push.c rev_rotate.c rotate.c solutions.c utils.c

OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

INCLUDE = -I ./

RM = rm -f
