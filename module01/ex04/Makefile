
NAME	=	replace

SRCS	=	main.cpp Replace.cpp

OBJS	=	${SRCS:.cpp=.o}

CC		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

RM		=	rm -rf

.PHONY	:	all clean fclean re

all		:	${NAME}

${NAME}	:	${OBJS}
			@${CC} ${FLAGS} ${OBJS} -o ${NAME}
			@printf "File '${NAME}' is created!\n"

clean	:
			@${RM} ${OBJS}
			@printf "Files '${OBJS}' are deleted!\n"

fclean	:	clean
			@${RM} ${NAME} test.txt.replace
			@printf	"File '${NAME}' and 'test.txt.replace' are deleted!\n"

re		:	fclean all