CC		= clang++

FLAG	= -g ##p-Wall -Wextra -Werror

OBJC =		$(SRCS:.cpp=.o)

NAME	= phonebook

SRCS	=	tests.cpp			\
			Account.cpp

RM		= rm -f

all:		$(NAME) Account.hpp

$(NAME) : $(OBJC)
			$(CC) $(FLAG) $(OBJC) -o $(NAME)

%.o:	%.cpp
			$(CC) -c $(FLAG) $< -o $@

clean:
			$(RM) $(OBJC)

fclean:	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clan fclean re




