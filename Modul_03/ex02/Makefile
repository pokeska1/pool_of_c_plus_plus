CC		= clang++ -std=c++98

FLAG	= -g -Wall -Wextra -Werror

OBJC =		$(SRCS:.cpp=.o)

NAME	= ClapTrap

SRCS	=	main.cpp			\
			ClapTrap.cpp		\
			ScavTrap.cpp		\
			FragTrap.cpp		\


RM		= rm -f

all:		$(NAME)

$(NAME) : $(OBJC) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
			$(CC) $(FLAG) $(OBJC) -o $(NAME)

%.o:	%.cpp
			$(CC) -c $(FLAG) $< -o $@

clean:
			$(RM) $(OBJC)

fclean:	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clan fclean re