CC		= clang++ -std=c++98

FLAG	= -g -Wall -Wextra -Werror -Wshadow -Wno-shadow

OBJC =		$(SRCS:.cpp=.o)

NAME	= Game

SRCS	=	main.cpp	\
			mutantstack.cpp	\


RM		= rm -f

all:		$(NAME)

$(NAME) : $(OBJC)
			$(CC) $(FLAG) $(OBJC) -o $(NAME)

%.o:	%.cpp mutantstack.hpp
			$(CC) -c $(FLAG) $< -o $@

clean:
			$(RM) $(OBJC)

fclean:	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clan fclean re