CC		= clang++

FLAG	= -g -Wall -Wextra -Werror

OBJC =		$(SRCS:.cpp=.o)

NAME	= megaphone

SRCS	= megaphone.cpp

RM		= rm -f

all:		$(NAME)

$(NAME) : $(OBJC)
			$(CC) $(FLAG) $(OBJC) -o $(NAME)

%.o:	%.cpp
			$(CC) -c $(FLAG) $< -o $@

clean:
			$(RM) $(OBJC)

fclean: clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
