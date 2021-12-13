#include "ft_printf.h"

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

	str = ft_itoa(nbr);
	if (n == -2147483648)
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
        }
	return (ft_strlen(str));
}
