/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:17:42 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 16:43:24 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* a la difference de strmapi, ne copie pas dans une chaine mais
travaille directement sur la chaine "char" qui se trouve dans (f) */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t				i;
	unsigned long		len ;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	to_uppercase(unsigned int i, char *c)
{
	(void)i;
	*c = toupper(*c);  // Modifie directement le caractère pointé
}

int	main()
{
	char str[] = "hello world!";
	ft_striteri(str, to_uppercase);  // Applique la fonction à chaque caractère
	printf("%s\n", str);
	return 0;
}
*/
/*
i = 0 ──► f(0, &str[0]) ──► 'h' devient 'H'
i = 1 ──► f(1, &str[1]) ──► 'e' devient 'E'
i = 2 ──► f(2, &str[2]) ──► 'l' devient 'L'
i = 3 ──► f(3, &str[3]) ──► 'l' devient 'L'
i = 4 ──► f(4, &str[4]) ──► 'o' devient 'O'
i = 5 ──► f(5, &str[5]) ──► ' ' reste ' ' (espace)
i = 6 ──► f(6, &str[6]) ──► 'w' devient 'W'
i = 7 ──► f(7, &str[7]) ──► 'o' devient 'O'
i = 8 ──► f(8, &str[8]) ──► 'r' devient 'R'
i = 9 ──► f(9, &str[9]) ──► 'l' devient 'L'
i = 10 ──► f(10, &str[10]) ──► 'd' devient 'D'
i = 11 ──► f(11, &str[11]) ──► '!' reste '!'
*/
