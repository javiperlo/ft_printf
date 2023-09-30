/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:39:09 by javperez          #+#    #+#             */
/*   Updated: 2023/09/30 19:30:58 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_putchar(int c);
char	ft_putstr(char *str);
int		ft_putdigit(long num, int base, char *symbols);
int		ft_printf(char const *str, ...);
int     ft_putpointer(long	num, int base, char *symbols);
char	typeof_element(char type, va_list ap);

#endif