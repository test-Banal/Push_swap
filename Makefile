# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 15:35:59 by aneumann          #+#    #+#              #
#    Updated: 2024/07/11 21:07:14 by aneumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

NAME_BONUS	=	checker

SRC			=	main.c main_utils.c operations_one.c operations_two.c\
				operations_three.c order.c order_two.c order_three.c\
				lis.c sort.c parsing.c 

SRC_BONUS	=	checker.c check_op_one.c check_op_two.c\
				checker_utils.c checker_utils_bis.c check_op_three.c

LIBFT		=	libft/libft.a

OBJ			=	$(SRC:.c=.o)

OBJ_BONUS	=	$(SRC_BONUS:.c=.o)

CC			=	gcc

RM			=	rm -f

CFLAGS		=	-Wall -Wextra -Werror -g3

$(NAME):	$(OBJ)
			make -C ./libft
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)

all:		$(NAME)

$(NAME_BONUS):	$(OBJ_BONUS)
			make -C ./libft
			$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJ_BONUS) $(LIBFT)

bonus:           $(NAME_BONUS)

clean:
			make clean -C libft
			${RM} $(OBJ) $(OBJ_BONUS)

fclean: 	clean
			make fclean -C libft
			${RM} $(NAME) $(NAME_BONUS) ${OBJ} $(OBJ_BONUS)

re:			fclean all bonus


.PHONY:		all bonus clean fclean re
