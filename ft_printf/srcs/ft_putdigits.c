/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:42:50 by javperez          #+#    #+#             */
/*   Updated: 2023/10/02 20:17:03 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigitx(long num, int base)
{
	char	*symbols;

	symbols = "0123456789abcdef";
	if (num < 0)
	{
		write (1, "-", 1);
		return (ft_putdigitx(-num, base));
	}
	else if (num < base)
		return (ft_putchar(symbols[num]));
	else
	{
		ft_putdigitx(num / base, base);
		return (ft_putdigitx(num % base, base));
	}
	return (0);
}

int	ft_putdigit_mayuscx(long num, int base)
{
	char	*symbols;

	symbols = "0123456789ABCDEF";
	if (num < 0)
	{
		write (1, "-", 1);
		return (ft_putdigit_mayuscx(-num, base));
	}
	else if (num < base)
		return (ft_putchar(symbols[num]));
	else
	{
		ft_putdigit_mayuscx(num / base, base);
		return (ft_putdigit_mayuscx(num % base, base));
	}
	return (0);
}
