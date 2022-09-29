NAME	= libft.a

SRCS	= *.c

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra

OBJS	= ${SRCS:c.=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:${OBJS}
	${CC} ${CFLAGS} -o ${OBJS}
	ar cr ${NAME} *.o

all:	${NAME}

clean:
	rm -f *.o
fclean : clean
	rm ${NAME}
re:
	fclean
	all
