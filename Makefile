SRCS	= *.c

NAME	= rush-02

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

${NAME}:	${SRCS}
			${CC} ${CFLAGS} -o ${NAME} *.c

all:		${NAME}

fclean:		
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
