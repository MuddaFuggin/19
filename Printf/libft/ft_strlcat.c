/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:43:37 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/12 18:04:12 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	while (i < size && dst[i] != '\0')
		i++;
	dst_len = i;
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
The strlcat() function appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
return : the initial length of dst plus the length of src.

int     main(void)
{
char *src = "fonctionner ? Oui.";
char dst[50] = "Ce programme veut-il bien ";
size_t size = 55;

ft_strlcat(dst, src, size);
printf("Result: %s\n", dst);
printf("Return: %ld\n", ft_strlcat(dst, src, size) );

return (0);
}
*/
