/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:47:50 by javperez          #+#    #+#             */
/*   Updated: 2023/09/21 21:01:47 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_strings(char *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	i = 0;
	str = (char **)malloc(sizeof(char *) * (count_strings((char *)s, c) + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (s[j] != c)
				j++;
			str[i] = ft_substr(s, 0, j);
			s = s + j;
			i ++;
		}
		else
			s++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *s = "hola tio que tal";
	char c = ' ';
	char	**str;

	str = ft_split(s, c);
	printf ("%s\n", str[2]);
	return (0);
}*/