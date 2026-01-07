/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:50:18 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 16:45:21 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stddef.h>*/

#include "libft.h" /* pour strlen */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
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
