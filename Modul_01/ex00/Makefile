CC		= clang++ -std=c++98

FLAG	= -g -Wall -Wextra -Werror

OBJC =		$(SRCS:.cpp=.o)

NAME	= Zombie

SRCS	=	main.cpp			\
			Zombie.cpp			\
			newZombie.cpp		\
			randomChump.cpp		\

RM		= rm -f

all:		$(NAME) Zombie.hpp

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




