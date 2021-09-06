CC		= clang++ -std=c++98

FLAG	= -g -Wall -Wextra -Werror -Wshadow -Wno-shadow

OBJC =		$(SRCS:.cpp=.o)

NAME	= Game

SRCS	=	main.cpp		\
			Integer.cpp		\
			Needed.cpp		\
			Char_sing.cpp	\
			Float_num.cpp	\
			Double_num.cpp	\


RM		= rm -f

all:		$(NAME)

$(NAME) : $(OBJC) Integer.hpp Needed.hpp Char_sing.hpp Float_num.hpp Double_num.hpp
			$(CC) $(FLAG) $(OBJC) -o $(NAME)

%.o:	%.cpp
			$(CC) -c $(FLAG) $< -o $@

clean:
			$(RM) $(OBJC)

fclean:	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clan fclean re