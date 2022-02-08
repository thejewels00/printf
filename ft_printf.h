/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchennak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:55:10 by jchennak          #+#    #+#             */
/*   Updated: 2022/02/08 17:31:45 by jchennak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nb);
int		ft_put_adress(unsigned long ad);
int		ft_hexa(unsigned int nbr, char *base);
int		ft_putu(unsigned int nb);	
int		ft_printf(const char *str, ...);
int		ft_hexaa(unsigned long nbr, char *base);

#endif
