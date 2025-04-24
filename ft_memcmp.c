/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:14:49 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 15:22:12 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*m1;
	unsigned char	*m2;
	size_t			i;

	m1 = (unsigned char *) s1;
	m2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (m1[i] < m2[i])
			return (m1[i] - m2[i]);
		if (m1[i] > m2[i])
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
	char s2[] = {0, 1, 2, 3, 4, 5};
        printf("%d\n", (ft_memcmp(s1, s2, n)));
return (0);
}
*/
