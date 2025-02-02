# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 12:25:44 by kkamata           #+#    #+#              #
#    Updated: 2021/11/11 16:45:01 by kkamata          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
			  init/init.c \
			  lst/add.c \
			  lst/clear.c \
			  lst/new.c \
			  lst/show.c \
			  lst/size.c \
			  ops/push.c \
			  ops/rotate.c \
			  ops/rrotate.c \
			  ops/swap.c \
			  output/answer.c \
			  output/cancel.c \
			  output/replace.c \
			  ps_less7/ps_less7.c \
			  ps_less7/rule2.c \
			  ps_less7/rule3.c \
			  ps_less7/rule456.c \
			  ps_more7/ps_more7.c \
			  ps_more7/qsort_a.c \
			  ps_more7/qsort_a_utils.c \
			  ps_more7/qsort_b.c \
			  ps_more7/qsort_b_utils.c \
			  ps_more7/qsort_reverse.c \
			  utils/debug.c \
			  utils/insertion_sort.c \
			  utils/median.c \
			  utils/pivot.c \
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
	$(CC) $(CFLAGS) -g $(INCLUDES) -o $(NAME) $(OBJS) $(LIBFT)

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
