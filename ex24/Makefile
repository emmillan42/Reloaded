NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/ft_putchar.c \
	   ./srcs/ft_putstr.c \
	   ./srcs/ft_strcmp.c \
	   ./srcs/ft_strlen.c \
	   ./srcs/ft_swap.c

HFILES_DIR = ./includes

OFILES = $(SRCS:.c=.o)

RM = rm -rf

all: ${NAME}

${NAME}: ${OFILES}
	ar rc ${NAME} ${OFILES}

./srcs/%.o:	./srcs/%.c
	${CC} ${CFLAGS} -I ${HFILES_DIR} -c $< -o $@

clean:
	${RM} ${OFILES}

fclean:	clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
