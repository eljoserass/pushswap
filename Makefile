##
## EPITECH PROJECT, 2020
## push_swap
## File description:
## THE MAKEFILE
##

NAME		=	push_swap

CLIB_NAME	=	myClib_pushswp.a

SRCS_DIR	=	src/

SRCS_FILES	=	main.c				\
				my_create_list.c	\
				my_init_struct.c 	\
				my_print_num_array.c\
				bubble_sort.c 		\
				sa.c 				\
				sb.c 				\
				sc.c 				\
				pa.c 				\
				pb.c 				\

SRCS		=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS		=	$(SRCS:.c=.o)

LIB_DIR		=	lib/

CLIB_DIR	=	myClibrary_pushswp

CLIB_PATH	=	$(addprefix $(LIB_DIR), $(CLIB_NAME))

RM 			=	rm -f

CC			=	gcc

CFLAGS		+=	-I./myClibrary_pushswp/include
CFLAGS		+=	-I./include
CFLAGS		+=	-W -Wall -Werror -g3

all:  $(CLIB_NAME) $(NAME)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS) $(CLIB_PATH)

$(CLIB_NAME):
		make -C $(CLIB_DIR)

clean:
	make clean -C $(CLIB_DIR)
	$(RM) $(OBJS)

fclean: clean
	make fclean -C $(CLIB_DIR)
	$(RM) $(NAME)

re: fclean all
	make re -C $(CLIB_DIR)