NAME		= ex03
SRCS		= main.cpp \
			  AMateria.cpp \
			  Character.cpp \
			  Cure.cpp \
			  Ice.cpp \
			  MateriaSource.cpp


OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -std=c++98
COMPILER	= clang++

.cpp.o:
	${COMPILER} ${FLAGS} -c $< -o ${<:.cpp=.o}

$(NAME): ${OBJS}
	${COMPILER} ${FLAGS} $(OBJS) -o $(NAME)

all: $(NAME)
    
fclean: clean
	$(RM) $(NAME)
    
clean:
	$(RM) $(OBJS)
    
re: fclean all

.PHONY: all clean fclean re
