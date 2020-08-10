##
## EPITECH PROJECT, 2018
## CPool_Day10
## File description:
## Makefile
##

SRCS	=	cat.c


OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

RM	=	rm -rf

NAME	=	cat

all:	$(NAME)

$(NAME):$(OBJS)
	gcc -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
