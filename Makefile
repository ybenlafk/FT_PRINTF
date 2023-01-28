
SRCS= ft_printf.c utils.c utils_2.c utils_3.c
OBJS= ${SRCS:%.c=%.o}
FLAGS= -Wall -Werror -Wextra
CC = cc
NAME = libf.a
HEADER = ft_printf.h

all: ${NAME}

${NAME}: ${OBJS}
	ar rc $(NAME) $(OBJS)

%.o: %.c ${HEADER}
	${CC} ${FLAGS} -c $<

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all