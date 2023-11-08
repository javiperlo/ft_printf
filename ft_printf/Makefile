# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 14:04:28 by javperez          #+#    #+#              #
#    Updated: 2023/11/08 11:27:12 by javperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIBFT		= ./libft/libft.a
LIBFT_DIR	= ./libft

SRC			= ./srcs

PRINTF_SRCS	= ft_printf.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putdigits.c \
				ft_putdigits.c \
				ft_putpointer.c

OBJS		= $(PRINTF_SRCS:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f
CP			= cp

all:		$(NAME)

$(NAME):	$(LIBFT) $(OBJS)
				$(CP) $(LIBFT) $(NAME)
				$(AR) $(NAME) $(OBJS)

# Esto significa que el makefile ejecutará otro makefile en el
# -C (Change directory)
# directorio $(LIBFT_DIR) para construir la biblioteca.

$(LIBFT):	$(LIBFT_DIR)
				@$(MAKE) -C $(LIBFT_DIR)

%.o: 		$(SRC)/%.c 
				@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(MAKE) clean -C $(LIBFT_DIR)
			@$(RM) $(OBJS)

fclean:		clean
			@$(MAKE) fclean -C $(LIBFT_DIR)
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re