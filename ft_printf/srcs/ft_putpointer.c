/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:03:55 by javperez          #+#    #+#             */
/*   Updated: 2023/09/30 19:49:04 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(long	num, int base, char *symbols)
{
	if (!num)
	{
		write(1, "(nil)",6);
		return (0);
	}
	write (1, "0x", 2);
	if (num < 0)
	{
		write (1, "-", 1);
		return (ft_putdigit(-num, base, symbols) - 1);
	}
	else if (num < base)
		return (ft_putchar(symbols[num]));
	else
	{
		ft_putdigit(num / base, base, symbols);
		return (ft_putdigit(num % base, base, symbols));
	}
	return (0);	
}