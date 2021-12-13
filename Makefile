CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

HEADER = ft_printf.h

SRCS = ft_printf.c\

LIBFT = $(LIBFT_DIR)/libft.a

LIBFT_FOL = libft

OBJS = $(SRCS:.C=.O)

all: libft_$(NAME)

libft_:

$(NAME): $(OBJS)
