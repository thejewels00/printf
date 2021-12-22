#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>
#include "libft/libft.h"

size_t	ft_putstr(char *str);
size_t	ft_putnbr(int nbr);
size_t	ft_put_adress(unsigned long ad);
size_t	ft_hexa(unsigned long nbr , char *base);
int	ft_putu(unsigned int nb);
int	ft_printf(const char *str, ...);

#endif
