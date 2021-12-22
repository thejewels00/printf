CC      = cc 
CFLAGS  = -Wall -Wextra -Werror
AR      = ar -rcs

NAME    = libftprintf.a
HEAD    = ft_printf.h
SRCS    = ft_printf.c ft_putall.c
                        
LIBFT_DIR = libft
OBJS    = $(SRCS:.c=.o)
LIBFT   = $(LIBFT_DIR)/libft.a


all: libft_ $(NAME)

libft_ :
	make -C libft

$(NAME): $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $^ libft/*.o

clean:
	make clean -C  libft
	rm -f  $(OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)
  
re: fclean all
	rm -f $(OBJS)

