
/i*#include "libftprintf.h" */

#include <stdarg.h>
#include <string.h>
static size_t flags(char a)
{
	size_t len_arg;

	len_arg = 0;

        if (a == 'c') //fin 
                ft_putchar_fd((char) va_arg(params, char), 1); 
		len_arg = 1
        else if (a == '%') // fin 
                ft_putchar_fd('%', 1);
		len_arg = 1;
        else if (a == 's') // fin 
                len_arg = ft_putstr((char *) va_arg(params, char *));
	else if (a == 'p') //a faire 
                len_arg = ft_put_adress(va_arg(params, unsigned long));
        else if (a == 'd' || a == 'i') //fin
                len_arg = ft_putnbr((int) va_arg(params, int));     
        else if (a == 'u')
                len_arg = ft_putu((unsigned int) va_arg(params, unsigned int));
        else if (a == 'x')
                //ft_putstr_ft(//, 1);
        else if (a == 'X')
                //ft_putstr_ft(//, 1);
	return (len_arg);
}

int	ft_printf(const char *str, ...)
{
	size_t len;
	size_t i;
	va_list params;
	size_t k;
        size_t j;

	i = 0;
	j = 0;
	k = 0;
	va_start(params, str);
	len = strlen(str); //attention a strlen
	while (i < len && str)
	{
		if (s[i] != '%')
			ft_putchar_fd(s[i++], 1);
		else
		{
			j += flags(s[++i]);
			k++; //nbr des %flags
			i++;
		}			
	}
	va_end(params);
	// ajouter le return totale :)
}
