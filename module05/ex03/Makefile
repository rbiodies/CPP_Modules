
NAME	=	bureaucrat

SRCS	=	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS	=	${SRCS:.cpp=.o}

CC		=	c++

FLAGS	=	-Wall -Werror -Wextra -std=c++98 -Wshadow -Who-shadow

RM		=	rm -rf

.PHONY	:	all clean fclean re

all		:	${NAME}

${NAME}	:	${OBJS}
			@${CC} ${FLAGS} ${OBJS} -o ${NAME}
			@printf "File '${NAME}' is created! ✅ \n"

clean	:
			@${RM} ${OBJS}
			@printf "Files '${OBJS}' are deleted! 🗑️ \n"

fclean	:	clean
			@${RM} ${NAME} home_shrubbery
			@printf	"Files '${NAME}' and 'home_shrubbery' are deleted! 🗑️ \n"

re		:	fclean all