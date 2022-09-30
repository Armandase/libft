NAME	= libft.a

SRCS	= ft_isaplha.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c \
ft_strrchr.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c \
ft_strlen.c ft_strtrim.c ft_isdigit.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c \
ft_strmapi.c ft_substr.c ft_isprint.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c \
ft_strncmp.c ft_tolower.c ft_itoa.c ft_memset.c ft_split.c ft_strlcat.c \
ft_strnstr.c ft_toupper.c

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar -rc ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	rm -f *.o
fclean : clean
	rm -f ${NAME}
re: fclean all
