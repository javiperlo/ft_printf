/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:42:50 by javperez          #+#    #+#             */
/*   Updated: 2023/10/04 20:46:43 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigitx(long num, int base)
{
	char	*symbols;
	int		count;

	count = 0;
	symbols = "0123456789abcdef";
	if (num < 0)
	{
		write (1, "-", 1);
		count += 1;
		return (count + ft_putdigitx(-num, base));
	}
	else if (num < base)
		return (ft_putchar(symbols[num]));
	else
	{
		count = ft_putdigitx(num / base, base);
		return (count + ft_putdigitx(num % base, base));
	}
	return (count);
}

int	ft_putdigit_mayuscx(long num, int base)
{
	char	*symbols;
	int		count;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (num < 0)
	{
		write (1, "-", 1);
		count += 1;
		return (count + ft_putdigit_mayuscx(-num, base));
	}
	else if (num < base)
		return (ft_putchar(symbols[num]));
	else
	{
		count = ft_putdigit_mayuscx(num / base, base);
		return (count + ft_putdigit_mayuscx(num % base, base));
	}
	return (count);
}
