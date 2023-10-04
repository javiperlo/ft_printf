/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:03:55 by javperez          #+#    #+#             */
/*   Updated: 2023/10/04 20:43:03 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countpoi(unsigned long long num)
{
	int	count;

	count = 0;
	while (num != 0)
	{
		count++;
		num = num / 16;
	}
	return (count);
}

/**
 * Esta función cuenta los dígitos en
 * hexadecimal del número entero. Y los retorna
*/
int	ft_putpointer(unsigned long long num)
{
	if (num >= 16)
	{
		ft_putpointer(num / 16);
		ft_putpointer(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd(num + 48, 1);
		else
			ft_putchar_fd(num - 10 + 'a', 1);
	}
	return (ft_countpoi(num));
}

int	ft_putpoi(unsigned long long num)
{
	int		len;

	len = 0;
	if (num == 0)
	{
		len = len + write (1, "(nil)", 5);
		return (len);
	}
	len = write (1, "0x", 2);
	len = len + ft_putpointer(num);
	return (len);
}
