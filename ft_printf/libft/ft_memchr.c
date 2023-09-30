/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:39:21 by javperez          #+#    #+#             */
/*   Updated: 2023/09/28 12:03:19 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	char			*s;

	i = 0;
	if (str == NULL)
		return (NULL);
	s = (char *)str;
	while (i < n)
	{
		if ((s[i] == (char)c))
			return (&s[i]);
		i ++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char cadena[] = "Eraese una nohay.desbordamientodememoriaaaaaaaaaaaaaaaaaa";
	char *puntero; 
	//char *puntero_funcion_original;
	
	char	caracter = 's';
	int	len = 17;
	puntero = (char *)ft_memchr( cadena, caracter, len);
	//puntero_funcion_original = (char *)memchr(cadena, caracter, len);
	//printf( "La cadena original es: %s", cadena); 
	printf( "%s", puntero ); 
	//printf( "%s", puntero_funcion_original); 
	return 0;
}*/