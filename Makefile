# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 19:53:23 by ado-prad          #+#    #+#              #
#    Updated: 2022/11/01 23:46:41 by ado-prad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall\
		-Wextra\
		-Werror

AR = ar -rc

RM = rm -f

SRCS = ft_printf.c\
		ft_check.c\
		ft_print_hexa.c\
		ft_print_int.c\
		ft_print_pointer.c\
		ft_print_char_and_string.c\
		ft_print_unsigned.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all	

.PHONY: all clean fclean re