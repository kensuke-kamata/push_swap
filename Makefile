############################################################
### Library name

NAME		= push_swap

############################################################
### Variables used by implicit rules

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

############################################################
### Includes

INCLUDES	= -I./includes

############################################################
### Sources
##### Directories

SRCDIR		= ./srcs/

##### Source files

SRC			= push_swap.c \
			  arg/arg.c \
			  branch/branch.c \
			  init/init.c \
			  lst/add.c \
			  lst/clear.c \
			  lst/new.c \
			  lst/show.c \
			  lst/size.c \
			  opes/push.c \
			  opes/rotate.c \
			  opes/rrotate.c \
			  opes/swap.c \
			  output/answer.c \
			  rules/rule2.c \
			  rules/rule3.c \
			  rules/rule456.c \
			  utils/insertion_sort.c \
			  utils/median.c \
			  utils/ps_atoi.c \
			  valid/valid.c

SRCS		= $(addprefix $(SRCDIR), $(SRC))

##### Object files

OBJS		= $(SRCS:.c=.o)

############################################################
### Library
##### libft

LIBFTPATH	= ./libft/
LIBFTMAKE	= $(MAKE) -C $(LIBFTPATH)
LIBFT		= -L$(LIBFTPATH) -lft

############################################################

.PHONY: all clean fclean re

############################################################
### Rules

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBFTMAKE)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS) $(LIBFT)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

clean:
	$(LIBFTMAKE) clean
	$(RM) $(OBJS)

fclean: clean
	$(LIBFTMAKE) fclean
	$(RM) $(NAME)

re: fclean all

############################################################
