NAME	=	push_swap

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -f

RED		=	\033[91;1m
GREEN	=	\033[92;1m
YELLOW	=	\033[93;1m
BLUE	=	\033[94;1m
PINK	=	\033[95;1m
CLEAR	=	\033[0m

all:	$(NAME)

$(NAME):
		@echo "$(BLUE)Make all$(CLEAR)\n$(PINK)Compiling.$(CLEAR)"
		@sleep 0.2
		@$(CC) $(CFLAGS) -o $(NAME) $(NAME).c
		@echo "$(GREEN)Success!$(CLEAR)\n$(YELLOW)Finished$(CLEAR)\n"

clean:
		@echo "$(BLUE)Make clean/fclean$(CLEAR)\n$(RED)Removing all compiled files.$(CLEAR)"
		@sleep 0.2
		@rm -f $(NAME)
		@echo "$(GREEN)Success!$(CLEAR)\n$(YELLOW)Finished$(CLEAR)\n"

fclean: clean

re:		fclean all