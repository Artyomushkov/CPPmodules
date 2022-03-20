NAME		= ex02
SRCS		= main.cpp
HEADER		= Base.h \
			  A.h \
			  B.h \
			  C.h

OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f
FLAGS		= -Wall -Wextra -Werror -std=c++98
COMPILER	= clang++

.cpp.o:
	${COMPILER} ${FLAGS} -c $< -o ${<:.cpp=.o}

$(NAME): ${OBJS} ${HEADER}
	${COMPILER} ${FLAGS} $(OBJS) -o $(NAME)

all: $(NAME)
    
fclean: clean
	$(RM) $(NAME)
    
clean:
	$(RM) $(OBJS)
    
re: fclean all

.PHONY: all clean fclean re
