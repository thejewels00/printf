# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchennak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 21:01:35 by jchennak          #+#    #+#              #
#    Updated: 2022/02/08 21:02:04 by jchennak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCF = ft_printf.c ft_putall.c ft_strlen.c putbase.c

#nommage automatique des fichier .o avec les noms de src file
all : ${NAME}
	
OBJ = ${SRCF:.c=.o}

# compiler qvec les flag et cree les .o 

${NAME} : ${OBJ}
	ar -rcs ${NAME} ${OBJ}

clean :
	rm -rf ${OBJ} 

fclean : clean
	rm -rf ${NAME}

re : fclean all

