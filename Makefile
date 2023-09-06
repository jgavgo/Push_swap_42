NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c 

OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

INCLUDE = -I ./

RM = rm -f
