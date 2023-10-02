/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:03:55 by javperez          #+#    #+#             */
/*   Updated: 2023/10/02 20:20:00 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(long num, int base)
{
	char	*symbols;

	symbols = "0123456789abcdef";
	if (!num)
	{
		write(1, "(nil)", 6);
		return (0);
	}
	write (1, "0x", 2);
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
