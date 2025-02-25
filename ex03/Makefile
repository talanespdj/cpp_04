NAME = interfaceRecap
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 -g3 

SRCS = main.cpp \
	Ice.cpp \
	Cure.cpp \
       	AMateria.cpp \
	Character.cpp \
	MateriaSource.cpp \

HIDDEN = .hidden
OBJS = $(SRCS:%.cpp=$(HIDDEN)/%.o)

$(HIDDEN)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c -o $@ $< 

all: $(NAME)
        
$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@echo "\033[1mInterface&Recap built\033[0m"

clean:
	@rm -rf $(OBJS)
	@rm -rf $(HIDDEN)
	@rm -rf .vscode
	@echo "c'est clean"

fclean: clean
	@rm -rf $(NAME)
	@echo "c'est fclean"

re: fclean all

.PHONY: all, clean, fclean, re
