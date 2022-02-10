/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchennak <jchennak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:24:35 by jchennak          #+#    #+#             */
/*   Updated: 2022/02/08 20:37:18 by jchennak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	flags(char a, va_list params)
{
	int	len_arg;

	len_arg = 0;
	if (a == 'c')
		len_arg = ft_putchar(va_arg(params, int));
	else if (a == '%')
		len_arg = ft_putchar('%');
	else if (a == 's')
		len_arg = ft_putstr((char *) va_arg(params, char *));
	else if (a == 'p')
		len_arg = ft_put_adress(va_arg(params, unsigned long));
	else if (a == 'd' || a == 'i')
		len_arg = ft_putnbr(va_arg(params, int));
	else if (a == 'u')
		len_arg = ft_putu(va_arg(params, unsigned int));
	else if (a == 'x')
		len_arg = ft_hexa(va_arg(params, long long), "0123456789abcdef");
	else if (a == 'X')
		len_arg = ft_hexa(va_arg(params, long long), "0123456789ABCDEF");
	return (len_arg);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	int		k;
	int		j;
	va_list	params;

	i = 0;
	j = 0;
	k = 0;
	va_start(params, str);
	len = ft_strlen(str);
	while (i < len && str)
	{
		if (str[i] != '%')
			ft_putchar(str[i++]);
		else
		{
			j += flags(str[++i], params);
			k++;
			i++;
		}
	}
	va_end(params);
	return (len - (2 * k) + j);
}
