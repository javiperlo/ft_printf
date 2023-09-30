/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:50:23 by javperez          #+#    #+#             */
/*   Updated: 2023/09/30 18:49:48 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	typeof_element(char type, va_list ap)
{
	char	*symbols;

	symbols = "0123456789abcdef";
	if (type == 'c')
		ft_putchar(va_arg(ap, int));
	else if (type == 's')
		ft_putstr(va_arg(ap, char *));
	else if (type == 'd')
		ft_putdigit((long)va_arg(ap, int), 10, symbols);
	else if (type == 'x')
		ft_putdigit((long)va_arg(ap, unsigned int), 16, symbols);
	else if (type == 'X')
	{
		symbols = "0123456789ABCDEF";
		ft_putdigit((long)va_arg(ap, unsigned int), 16, symbols);
	}
	else if (type == '%')
		ft_putchar(va_arg(ap, int));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	ap;

	va_start(ap, str);
	i = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			typeof_element(*(str + 1), ap);
			i ++;
			str++;
		}
		else
			write (1, str, 1);
		str ++;
	}
	va_end (ap);
	return (i);
}

/**
 * Me he quedado por el %p, que hay que añadir un 0x antes de
 *  número hexadecimal. Si esnegativo aumenta de tamaño.
*/