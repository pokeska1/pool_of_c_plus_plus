CC		= clang++ -std=c++98

FLAG	= -g -Wall -Wextra -Werror -Wshadow -Wno-shadow

OBJC =		$(SRCS:.cpp=.o)

NAME	= Game

SRCS	=	main.cpp			\
			AMateria.cpp		\
			Character.cpp		\
			Cure.cpp			\
			Ice.cpp				\
			MateriaSource.cpp	\




RM		= rm -f

all:		$(NAME)

$(NAME) : $(OBJC) ICharacter.hpp MateriaSource.hpp IMateriaSource.hpp Ice.hpp Cure.hpp AMateria.hpp Character.hpp
			$(CC) $(FLAG) $(OBJC) -o $(NAME)

%.o:	%.cpp
			$(CC) -c $(FLAG) $< -o $@

clean:
			$(RM) $(OBJC)

fclean:	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clan fclean re