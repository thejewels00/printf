#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int i;
	if (str == NULL)
		return (ft_putstr("(null)"));
	i = ft_strlen(str);
	if (str)
		write(1, str, i);
	return (i);
}

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		i++;
	}
	if (nb >= 10)
	{
		i += ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
	i++;
	return (i);
}

int ft_put_adress(unsigned long ad)
{
	int	i;

	if (ad == 0)
		return (ft_putstr("0x0"));
	i = ft_putstr("0x");
	i += ft_hexaa(ad,"0123456789abcdef");
      return (i);	
}	
	int ft_hexaa(unsigned long nbr , char *base)
{
	int	i;
	unsigned long temp;
	char *p;

	temp = nbr;
	i = 0;
	while (temp)
	{
		temp /= 16;
		i++;
	}
	p = (char *)malloc(i + 1);
	if (!p)
		return(0);
	if (nbr == 0)
	{
		free(p);
		return(write(1,"0",1));
	}
	p[i] = '\0';
	while (nbr)
	{
		p[--i] = base[nbr % 16];
		nbr /= 16;
	}
	i = 0;
	i = ft_putstr(p);
	free(p);
	return (i);
}
int ft_hexa(unsigned int nbr , char *base)
{
	int	i;
	long long temp;
	char *p;

	temp = nbr;
	i = 0;
	while (temp)
	{
		temp /= 16;
		i++;
	}
	p = (char *)malloc(i + 1);
	if (!p)
		return(0);
	if (nbr == 0)
	{
		free(p);
		return(write(1,"0",1));
	}
	p[i] = '\0';
	while (nbr)
	{
		p[--i] = base[nbr % 16];
		nbr /= 16;
	}
	i = 0;
	i = ft_putstr(p);
	free(p);
	return (i);
}
// reviser 
int ft_putu(unsigned int nb)
{
	unsigned int i;
	char	r;

	i = 0;
	if (nb >= 10)
	{
		i += ft_putu(nb / 10);
		r = nb % 10 + '0';
		write(1, &r, 1);
	}
	else
	{
		r = nb + '0';
		write(1, &r, 1);
	}
	i++;
	return (i);
}