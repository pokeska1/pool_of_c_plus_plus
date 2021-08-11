CC		= clang++

FLAG	= -g -Wall -Wextra -Werror

SRCS	= megaphone.cpp

NAME	= megaphone

RM		= rm -f

all:		$(NAME)

$(NAME) :
			$(CC) $(FLAG) $(SRCS) -o $(NAME)

fclean:
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clan fclean re




