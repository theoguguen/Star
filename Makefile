##
## EPITECH PROJECT, 2021
## Star
## File description:
## Makefile
##

SRCDIR	=	src

SRC	=	$(SRCDIR)/main.c	\
		$(SRCDIR)/star.c	\
		$(SRCDIR)/draw.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I includes/

NAME	=	star

all:	$(NAME)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

debug:	CFLAGS += -g
debug:	re

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all