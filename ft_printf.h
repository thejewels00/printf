#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include "libft/libft.h"

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_put_adress(unsigned long ad);
int	ft_hexa(unsigned int nbr , char *base);
int	ft_putu(unsigned int nb);
int	ft_printf(const char *str, ...);
int ft_hexaa(unsigned long nbr , char *base);

#endif
