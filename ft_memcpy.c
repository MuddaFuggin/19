/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:16:48 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/10 18:48:54 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	const char		*srce;

	desti = dest;
	srce = src;
	while (n--)
		desti[n] = srce[n];
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, world!";
    char dest[50];

    ft_memcpy(dest, source, strlen(source) + 1); 
// Inclut le caractère de fin de chaîne '\0'

    printf("Source: %s\n", source);
    printf("Destination: %s\n", dest);

    return 0;
}
*/
/*
DESCRIPTION
The memcpy() function copies n bytes from memory area src to memory area dest.  
The memory areas must not overlap.  
Use memmove(3) if the memory areas do overlap.

RETURN VALUE
The memcpy() function returns a pointer to dest.
	*/
