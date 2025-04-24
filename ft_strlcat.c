/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <camillesimonney@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:43:37 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/11 17:12:39 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  /* pour mon ft_strlen*/
/*
#include <unistd.h>
#include <string.h> // pour strlen  et strlcat test
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	if (size == 0)
		return (0);
	while (dst[i] != '\0')
		i++;
	while (src[y] != '\0' && y < size - 1)
		dst[i++] = src[y++];
	dst[i] = '\0';
	return ((strlen(dst)) + (strlen(src)));
}
/*


#include <stdio.h>
int     main(void)
{
char *src = "World of the people!";
char dst[50] = "Hello, ";
size_t size = 5;

ft_strlcat(dst, src, size);
printf("Result: %s\n", dst);
printf("Return: %zu\n", ft_strlcat(dst, src, size) );

return (0);
}
*/
