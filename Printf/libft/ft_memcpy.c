/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:16:48 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/30 12:38:23 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == 0 && dest == 0)
		return (dest);
	if (n <= 0)
		return (dest);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, world!";
    char dest[50];
	size_t n;

    ft_memcpy(dest, source, n + 1);
// Inclut le caractère de fin de chaîne '\0'

    printf("%s\n", dest);

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
