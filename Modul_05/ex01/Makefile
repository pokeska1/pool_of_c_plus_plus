CC		= clang++ -std=c++98

FLAG	= -g -Wall -Wextra -Werror

OBJC =		$(SRCS:.cpp=.o)

NAME	= Animal

SRCS	=	main.cpp			\
			Bureaucrat.cpp		\
			Form.cpp			\

RM		= rm -f

all:		$(NAME)

$(NAME) : $(OBJC) Bureaucrat.hpp Form.hpp
			$(CC) $(FLAG) $(OBJC) -o $(NAME)

%.o:	%.cpp
			$(CC) -c $(FLAG) $< -o $@

clean:
			$(RM) $(OBJC)

fclean:	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clan fclean re