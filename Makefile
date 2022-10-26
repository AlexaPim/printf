# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/26 19:53:23 by ado-prad          #+#    #+#              #
#    Updated: 2022/10/26 21:40:29 by ado-prad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

FLAGS = -Wall\
		-Wextra\
		-Werror

AR = ar -rc

RM = rm -f

SRCS = ft_printf.c\
		ft_check.c\
		ft_print_hexa.c\
		ft_print_int.c\
		ft_print_pointer\
		ft_print_unsigned

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all	

.PHONY: all clean fclean re