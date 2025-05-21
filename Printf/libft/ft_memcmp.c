/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:14:49 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/08 19:59:05 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*m1;
	const unsigned char	*m2;
	size_t				i;

	if (!s1 && !s2)
		return (0);
	if (!s1 || !s2)
		return (0);
	i = 0;
	m1 = (const unsigned char *) s1;
	m2 = (const unsigned char *) s2;
	while (i < n)
	{
		if (m1[i] != m2[i])
			return (m1[i] - m2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int     main()
{
        size_t n = 6;
        char s1[] = {0, 1, 2, 3, 4};
	char s2[] = {0, 1, 2, 3};
        printf("%d\n", (ft_memcmp(s1, s2, n)));
return (0);
}
*/
