# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/14 21:15:05 by babdelka          #+#    #+#              #
#    Updated: 2019/07/27 03:39:04 by babdelka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
OBJ = src/main.o \
	  src/fillit.o \
	  src/store.o \
	  src/backtrack.o \
	  src/checkfile.o \
	  src/freetab2d.o \
	  src/freetab3d.o \
	  src/reallocboard.o \
	  src/solverstart.o \
	  src/printboard.o \
	  src/boardalloc.o \
	  src/defragment.o \
	  src/allocatetritable.o \
	  src/checktetri.o \
	  src/countlines.o \
	  src/buildtetri.o \
	  src/get_next_line.o

LIBOBJ = libft/ft_atoi.o \
	  libft/ft_bzero.o \
	  libft/ft_countcdigit.o \
	  libft/ft_countidigit.o \
	  libft/ft_isalnum.o \
	  libft/ft_isalpha.o \
	  libft/ft_isascii.o \
	  libft/ft_isdigit.o \
	  libft/ft_isprint.o \
	  libft/ft_iswspace.o \
	  libft/ft_itoa.o \
	  libft/ft_lstadd.o \
	  libft/ft_lstdel.o \
	  libft/ft_lstdelone.o \
	  libft/ft_lstiter.o \
	  libft/ft_lstmap.o \
	  libft/ft_lstnew.o \
	  libft/ft_memalloc.o \
	  libft/ft_memccpy.o \
	  libft/ft_memchr.o \
	  libft/ft_memcmp.o \
	  libft/ft_memcpy.o \
	  libft/ft_memdel.o \
	  libft/ft_memmove.o \
	  libft/ft_memset.o \
	  libft/ft_putchar.o \
	  libft/ft_putchar_fd.o \
	  libft/ft_putendl.o \
	  libft/ft_putendl_fd.o \
	  libft/ft_putnbr.o \
	  libft/ft_putnbr_fd.o \
	  libft/ft_putstr.o \
	  libft/ft_putstr_fd.o \
	  libft/ft_strcat.o \
	  libft/ft_strchr.o \
	  libft/ft_strclr.o \
	  libft/ft_strcmp.o \
	  libft/ft_strcpy.o \
	  libft/ft_strdel.o \
	  libft/ft_strdup.o \
	  libft/ft_strequ.o \
	  libft/ft_striter.o \
	  libft/ft_striteri.o \
	  libft/ft_strjoin.o \
	  libft/ft_strlcat.o \
	  libft/ft_strlen.o \
	  libft/ft_strlenws.o \
	  libft/ft_strmap.o \
	  libft/ft_strmapi.o \
	  libft/ft_strncat.o \
	  libft/ft_strncmp.o \
	  libft/ft_strncpy.o \
	  libft/ft_strnequ.o \
	  libft/ft_strnew.o \
	  libft/ft_strnstr.o \
	  libft/ft_strrchr.o \
	  libft/ft_strsplit.o \
	  libft/ft_strstr.o \
	  libft/ft_strsub.o \
	  libft/ft_strtrim.o \
	  libft/ft_tolower.o \
	  libft/ft_toupper.o

all: $(NAME)

$(NAME): $(OBJ) $(LIBOBJ)
	Make -C libft/
	Make -C src/

clean:
	rm -f $(OBJ)
	Make -C src/ clean
	Make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	Make -C libft/ fclean
	Make -C src/ fclean

re: fclean all
