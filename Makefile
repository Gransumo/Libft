
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f
NAME	= libft.a
SRCS	= ft_isalnum.c ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c	\
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strlcat.c 	\
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c 			\
			ft_toupper.c ft_atoi.c ft_memmove.c ft_strnstr.c ft_calloc.c ft_strdup.c	\
			ft_substr.c ft_strjoin.c
OBJS	= ${SRCS:.c=.o}
AR		= ar rc

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
	#${CC} -o ${CFLAGS} ${NAME} ${OBJS}
	${AR} ${NAME} ${OBJS}
all:	${NAME}
clean:
	${RM} ${OBJS}
fclean:	clean
	${RM} ${NAME}
re: fclean all
.PHONY:	all clean fclean re