
NAME	=	zombie

SRCS	=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS	=	${SRCS:.cpp=.o}

CC		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

rm		=	rm -rf

.PHONY	:	all clean fclean re

all		:	${NAME}

${NAME}	:	${OBJS}
			@${CC} ${FLAGS} ${OBJS} -o ${NAME}
			@printf "File '${NAME}' is created!\n"

clean	:
			@${RM} ${OBJS}
			@printf "Files '${OBJS}' are deleted!\n"

fclean	:	clean
			@${RM} ${NAME}
			@printf	"File '${NAME}' is deleted!\n"

re		:	fclean all