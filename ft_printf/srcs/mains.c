/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mains.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:25:26 by javperez          #+#    #+#             */
/*   Updated: 2023/09/30 19:47:02 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
    char    *str;

    str = "Javier";
	ft_printf("Hola que tal, %s\n", str);
	ft_printf("Tienes %d años\n", 20);
	ft_printf("Tu caracter favorito es: %%\n");
	ft_printf("Tu caracter favorito ahora es: %c\n", 'a');
	ft_printf("Tu numero favorito %d, en hex min es: %x y en mayusc %X\n", 42, 42, 42);
	ft_printf("Parece que %u funciona?\n", 42);
	ft_printf("Y parece ser que %i tambien funciona\n", 42);
	ft_printf("Solo me queda que %p funcione\n", 0);
    printf ("\n");
    printf ("Hola que tal, %s\n", str);
	printf("Tienes %d años\n", 20);
	printf("Tu caracter favorito es: %%\n");
	printf("Tu caracter favorito ahora es: %c\n", 'a');
	printf("Tu numero favorito %d, en hex min es: %x y en mayusc %X\n", 42, 42, 42);
	printf("Parece que %u funciona?\n", 42);
	printf("Y parece ser que %i tambien funciona\n", 42);
	printf("Solo me queda que %p funcione\n", 0);

}