##
## EPITECH PROJECT, 2020
## lib
## File description:
## lib
##

CLIB_NAME		=	myClib_pushswp.a

CLIB_SRCS_DIR	=	src/

CLIB_SRCS_FILES	=	my_putstr.c				\
					my_put_nbr.c			\
					my_putchar.c			\
					my_strcpy.c 			\
					my_print_char_array.c	\
					my_getnbr.c 			\

CLIB_SRCS		=	$(addprefix $(CLIB_SRCS_DIR), $(CLIB_SRCS_FILES))

CLIB_OBJS		=	$(CLIB_SRCS:.c=.o)

CLIB_PATH		=	../lib/

CLIB_DIR 		=	$(addprefix $(CLIB_PATH), $(CLIB_NAME))

RM 				=	rm -f

CFLAGS			+=	-I./include
CFLAGS			+=	-W -Wall -Werror -g3

all: $(CLIB_NAME)

$(CLIB_NAME):	$(CLIB_OBJS)
				ar rc $(CLIB_DIR) $(CLIB_OBJS)

clean:
	$(RM) $(CLIB_OBJS)

fclean: clean
	$(RM) $(CLIB_DIR)

re: fclean all