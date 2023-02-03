
NAME	:= animals

SRCS	:= main.cpp Cat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp
OBJS	:= $(SRCS:.cpp=.o)

DEPS	=	$(OBJS:.o=.d)

CXX	:= c++
CXXFLAGS := -Wall -Werror -Wextra -MMD -MP -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp 
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

-include $(DEPS)