/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:07:19 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 15:22:44 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;
	char			buffer;

	d = dest;
	s = src;
	while (n--)
	{
		buffer = s[n];
		d[n] = buffer;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "Hello, world!";
    char dest[50];

    ft_memmove(dest, source, strlen(source));

    printf("Source: %s\n", source);
    printf("Destination: %s\n", dest);

    return 0;
}
*/

/*
DESCRIPTION
The  memmove() function copies n bytes from memory area src
to memory area dest.
The memory areas may overlap: copying takes place as though
the bytes in src are first copied into a temporary array
that does not overlap src or dest,
and the bytes are then copied from the temporary array to dest.

RETURN VALUE
The memmove() function returns a pointer to dest.
*/
