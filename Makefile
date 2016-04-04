CC =		gcc

NAME	=	my_ls

CFLAGS	= -Wall -pedantic 

SRC	=	fonctions/my_strcmp.c	 \
		fonctions/my_putchar.c	 \
		fonctions/my_putstr.c \
		fonctions/my_put_nbr.c \
		fonctions/my_ls-a.c \
		fonctions/my_ls-d.c \
		fonctions/my_ls-l.c \
		fonctions/my_ls.c \
		fonctions/my_lsA.c \
		fonctions/my_opt.c \
		main.c	

OBJ	=	$(SRC:%.c=%.o)

RM	=	rm -f

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS) 

all:		$(NAME)


clean:		
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all