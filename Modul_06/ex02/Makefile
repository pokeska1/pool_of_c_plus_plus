CC		= clang++ -std=c++98

FLAG	= -g -Wall -Wextra -Werror -Wshadow -Wno-shadow

OBJC =		$(SRCS:.cpp=.o)

NAME	= Game

SRCS	=	main.cpp		\
			Base.cpp		\
			A.cpp			\
			B.cpp			\
			C.cpp			\

RM		= rm -f

all:		$(NAME)

$(NAME) : $(OBJC) Base.hpp A.hpp B.hpp C.hpp
			$(CC) $(FLAG) $(OBJC) -o $(NAME)

%.o:	%.cpp
			$(CC) -c $(FLAG) $< -o $@

clean:
			$(RM) $(OBJC)

fclean:	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clan fclean re