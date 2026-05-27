NAME = ft_display_file

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_display_file.c

OFILES = $(SRCS:.c=.o)

RM = rm -rf

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
