CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	main.cpp\
		Bureaucrat.cpp\
		Form.cpp
		

NAME = Form_up

OBJECTS = $(SRCS:.cpp=.o)

RM = rm -f

all: $(NAME)

%.o: %.cpp  Form.hpp
	c++ $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJECTS)
	c++ $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all