/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:07:19 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/12 17:57:30 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (n == 0)
		return (d);
	if (dest > src)
	{
		while (n--)
			d[n] = s[n];
		return (d);
	}
	if (dest < src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (d);
	}
	return (d);
}
/*
int main()
{
    char source[] = "Hello, world!";
    char dest[25];

    ft_memmove(dest, source +2, 5);
		
    printf("Source: %s\n", source);
    printf("Destination: %s\n", dest);
    return 0;
}
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
