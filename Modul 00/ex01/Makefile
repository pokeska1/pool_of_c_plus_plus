CC		= clang++

FLAG	= -g -Wall -Wextra -Werror

OBJC =		$(SRCS:.cpp=.o)

NAME	= phonebook

SRCS	=	phonebook.cpp			\
			class_phonebook.cpp

RM		= rm -f

all:		$(NAME) phonebook.h

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




