CC = gcc
CFLAGS = -Wall -Wextra -Werror
INC = includes/
SRC = srcs/
NAME = libft.a
OBJS = $(SRC:.c=.o)

.c.o:
	$(CC) -o $@ -c $< $(CFLAGS)

$(NAME): $(OBJS)

clean:
	rm *.o
