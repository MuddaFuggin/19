/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:50:16 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/12 19:31:35 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	needle;

	needle = (unsigned char) c;
	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == needle)
			return ((void *) &ptr[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	size_t n = 3;
	char s[] = {0, 1, 2, 3, 4, 5};
	int c = 4;
	printf("%p\n", (ft_memchr(s, c, n)));
return (0);
}
*/
