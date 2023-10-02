/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:39:09 by javperez          #+#    #+#             */
/*   Updated: 2023/10/02 14:28:54 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <strings.h>
# include <stdlib.h>

int		ft_putchar(int c);
char	ft_putstr(char *str);
int		ft_putdigitx(long num, int base);
int		ft_putdigit_mayuscx(long num, int base);
int		ft_printf(char const *str, ...);
int		ft_putpointer(long num, int base);
char	typeof_element(char type, va_list ap);

#endif