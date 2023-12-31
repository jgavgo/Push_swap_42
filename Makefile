NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRCS = push_swap.c push.c rev_rotate.c rotate.c solutions.c utils.c maxnum.c order_stacks.c

OBJS = $(SRCS:.c=.o)
DEPS = $(OBJS:.o=.d)

INCLUDE = -I ./

RM = rm -f

all: $(NAME)

%.o:%.c push_swap.h Makefile
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) 
	@${CC} -g ${SRCS} -o ${NAME}

-include $(DEPS)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)
 
 re: fclean all
.PHONY: all clean fclean re
