/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:32:37 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 16:16:48 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)

{
	unsigned char	*cast;
	size_t			i;

	i = 0;
	cast = (unsigned char *)s;
	if (s == 0)
		return (0);
	while (i < n)
	{
		cast[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "MuddaFugginBigWave!";
	int c = 'X';
	unsigned int n = 9;

	printf("Avant memset: %s\n", str);
	ft_memset(str, c, n);
	printf("Après memset: %s\n", str);
	return 0;
}
*/
/*
The memset() function fills the first n bytes
 of the memory area pointed to by s 
with the constant byte c.
*/
