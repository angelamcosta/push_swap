NAME	=	push_swap

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra

all:	$(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -o $(NAME) $(NAME).c
		@echo "Compiling"

clean:
		@rm -f $(NAME)
		@echo "Cleaning"

fclean: clean

re:		fclean all
