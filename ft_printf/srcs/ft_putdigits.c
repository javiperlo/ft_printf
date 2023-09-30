/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:42:50 by javperez          #+#    #+#             */
/*   Updated: 2023/09/30 18:37:03 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit(long num, int base, char *symbols)
{
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
