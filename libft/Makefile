# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 17:44:39 by aneumann          #+#    #+#              #
#    Updated: 2024/07/05 16:48:46 by aneumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isprint.c \
		 ft_isdigit.c \
		 ft_isascii.c \
		 ft_isalpha.c \
		 ft_isalnum.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_strncmp.c \
		 ft_strlen.c \
		 ft_memcmp.c \
		 ft_atoi.c \
		 ft_strlcpy.c \
		 ft_strlcat.c \
		 ft_strnstr.c \
		 ft_strrchr.c \
		 ft_substr.c \
		 ft_strjoin.c \
		 ft_strtrim.c \
		 ft_strmapi.c \
		 ft_strdup.c \
		 ft_strchr.c \
		 ft_striteri.c \
		 ft_putchar_fd.c \
		 ft_putstr_fd.c \
		 ft_putendl_fd.c \
		 ft_putnbr_fd.c \
		 ft_memmove.c \
		 ft_memset.c \
		 ft_memcpy.c \
		 ft_memchr.c \
		 ft_split.c \
		 ft_calloc.c \
		 ft_bzero.c \
		 ft_itoa.c \
		 ft_display_exit.c \
		 ft_strcmp.c \
		 ft_get_next_line.c\
		 get_next_line.c \
		 ft_lstnew.c \
		 ft_lstadd_front.c \
 		 ft_lstsize.c \
 		 ft_lstlast.c \
 		 ft_lstadd_back.c \
 		 ft_lstdelone.c \
		 ft_add_back.c \
 		 ft_lstclear.c \
 		 ft_lstiter.c \
 		 ft_lstmap.c

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

INCLUDE = libft.h

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus:  $(OBJ_B)
	ar rcs $(NAME)  $(OBJ_B)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@
clean:
	rm -f $(OBJ) $(OBJ_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re	
