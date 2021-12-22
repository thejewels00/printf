#include "ft_printf.h"
#include "libft/libft.h"

size_t	ft_putstr(char *str)
{
	size_t i;

	i = ft_strlen(str);
	if (str)
		write(1, str, i);
	return (i);
}

size_t ft_putnbr(int nbr)
{
	char *str;
	size_t i;

	str = ft_itoa(nbr);
	i = ft_putstr(str);
	/*if (n == -2147483648)
                ft_putstr_fd("-2147483648", fd);
        else
        {
                if (n < 0)
                {
                        ft_putchar_fd('-', fd);
                        n *= -1;
                }
                if (n <= 9)
                        ft_putchar_fd(n + '0', fd);
                else
                {
                        ft_putnbr_fd(n / 10, fd);
                        ft_putnbr_fd(n % 10, fd);
                        n /= 10;
                }
        }*/
	return (i);
}

size_t ft_put_adress(unsigned long ad)
{
	size_t i;

	if (n == 0)
		return (ft_putstr("0x0"));
	i = ft_putstr("0x");
	i += ft_hexa(ad,"0123456789abcdef");
      return (i);	
}	
	
size_t ft_hexa(unsigned long nbr , char *base)
{
	
	size_t	i;
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
	while (n)
	{
		p[--i] = base[n % 16];
		n /= 16;
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
	if (nb < 0)
	{
		write(1, '-', 1);
		nb *= -1;	
	}
	if (nb >= 10)
	{
		i += ft_putu(nb / 10);
		r = nb % 10 + '0';
		write(1, r, 1);
	}
	else
	{
		r = nb + '0';
		write(1 ,r ,1);
	}
	i++;
	return (i);
}

























