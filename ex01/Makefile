SRCS = WrongAnimal.cpp WrongCat.cpp main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp
OBJS = ${SRCS:.cpp=.o}
CC    = c++
CFLAGS	= -Wextra -Wall -Werror -std=c++98
NAME	= a.out
.cpp.o:		&{CC} &{CFLAGS} -c -o $@ $<

all:  ${NAME}

${NAME} : ${OBJS}
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	 rm -f ${OBJS}

fclean :	clean
	rm -f ${NAME}

re : fclean all clean

.PHONY: all bonus clean fclean re