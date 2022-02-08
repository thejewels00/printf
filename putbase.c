/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putbase.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchennak <jchennak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:08:47 by jchennak          #+#    #+#             */
/*   Updated: 2022/02/08 17:23:42 by jchennak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include "ft_printf.h"

int	ft_hexaa(unsigned long nbr, char *base)
{
	int				i;
	unsigned long	temp;
	char			*p;

	if (nbr == 0)
		return (write(1, "0", 1));
	temp = nbr;
	i = 0;
	while (temp)
	{
		temp /= 16;
		i++;
	}
	p = (char *)malloc(i + 1);
	if (!p)
		return (0);
	p[i] = '\0' ;
	while (nbr)
	{
		p[--i] = base[nbr % 16];
		nbr /= 16;
	}
	free(p);
	return (ft_putstr(p));
}

int	ft_hexa(unsigned int nbr, char *base)
{
	int			i;
	long long	temp;
	char		*p;

	if (nbr == 0)
		return (write(1, "0", 1));
	temp = nbr;
	i = 0;
	while (temp)
	{
		temp /= 16;
		i++;
	}
	p = (char *)malloc(i + 1);
	if (!p)
		return (0);
	p[i] = '\0';
	while (nbr)
	{
		p[--i] = base[nbr % 16];
		nbr /= 16;
	}
	free(p);
	return (ft_putstr(p));
}

int	ft_putu(unsigned int nb)
{
	unsigned int	i;
	char			r;

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
