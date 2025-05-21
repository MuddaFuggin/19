/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:50:18 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/30 12:35:29 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
Copie au plus size - 1 caractères de src dans dst, puis ajoute un \0.

Toujours retourner la longueur de src, même si elle dépasse size.

The strlcpy() function copies up to size - 1 characters
from the NUL-terminated string src to dst, NUL-terminating the result
 The strlcpy() and strlcat() functions return the total length
of the string they tried to create.
For strlcpy() that means the length of src.
*/
/*

#include <stdio.h>
int	main(void)
{
char dst[10];
const char *src = "Hello, World!";
size_t result = ft_strlcpy(dst, src, sizeof(dst));

printf("Result: %s\n", dst);
printf("Return: %zu\n", result);  // Output: 13 (length of "Hello, World!")

return(0);
}

*/
