/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:41:46 by javperez          #+#    #+#             */
/*   Updated: 2023/10/04 20:42:49 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*str != '\0')
	{
		write(1, &*str, 1);
		count ++;
		str ++;
	}
	return (count);
}
