CC		= clang++ -std=c++98

FLAG	= -g -Wall -Wextra -Werror -Wshadow -Wno-shadow

OBJC =		$(SRCS:.cpp=.o)

NAME	= Animal

SRCS	=	main.cpp			\
			Dog.cpp				\
			Cat.cpp				\
			Animal.cpp			\
			Brain.cpp			\


RM		= rm -f

all:		$(NAME)

$(NAME) : $(OBJC) Animal.hpp Cat.hpp Dog.hpp Brain.hpp
			$(CC) $(FLAG) $(OBJC) -o $(NAME)

%.o:	%.cpp
			$(CC) -c $(FLAG) $< -o $@

clean:
			$(RM) $(OBJC)

fclean:	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clan fclean re