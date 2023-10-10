/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:50:23 by javperez          #+#    #+#             */
/*   Updated: 2023/10/10 14:44:36 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	typeof_element(char type, va_list ap)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (type == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (type == 'd')
		count += ft_putdigitx((long)va_arg(ap, int), 10);
	else if (type == 'u')
		count += ft_putdigitx((long)va_arg(ap, unsigned int), 10);
	else if (type == 'x')
		count += ft_putdigitx((long)va_arg(ap, unsigned int), 16);
	else if (type == 'X')
		count += ft_putdigit_mayuscx((long)va_arg(ap, unsigned int), 16);
	else if (type == 'i')
		count += ft_putdigitx((long)(va_arg(ap, int)), 10);
	else if (type == 'p')
		count += ft_putpoi(va_arg(ap, unsigned long long));
	else
		count += write(1, &type, 1);
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, str);
	count = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			count += typeof_element(*(str + 1), ap);
			str++;
		}
		else
			count += write(1, str, 1);
		str ++;
	}
	va_end (ap);
	return (count);
}
