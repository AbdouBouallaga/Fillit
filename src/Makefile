# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/14 21:15:05 by babdelka          #+#    #+#              #
#    Updated: 2019/07/27 03:39:32 by babdelka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Werror -Wextra

SRC = main.c \
	  fillit.c \
	  store.c \
	  backtrack.c \
	  checkfile.c \
	  freetab2d.c \
	  freetab3d.c \
	  reallocboard.c \
	  solverstart.c \
	  printboard.c \
	  boardalloc.c \
	  defragment.c \
	  allocatetritable.c \
	  checktetri.c \
	  countlines.c \
	  buildtetri.c \
	  get_next_line.c

OBJ = main.o \
	  fillit.o \
	  store.o \
	  backtrack.o \
	  checkfile.o \
	  freetab2d.o \
	  freetab3d.o \
	  reallocboard.o \
	  solverstart.o \
	  printboard.o \
	  boardalloc.o \
	  defragment.o \
	  allocatetritable.o \
	  checktetri.o \
	  countlines.o \
	  buildtetri.o \
	  get_next_line.o

BIN = ../libft/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) $(OBJ) $(BIN) -o ../$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
