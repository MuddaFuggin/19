/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:38:36 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/03 17:37:30 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len == 0 || start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc (sizeof (char) * len + 1);
	if (!sub)
		return (NULL);
	while (*s != '\0' && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int     main()
{
        char const s[] = "bb hbo";
        unsigned int    start = 0;
        size_t  len = 3;

        printf("%s\n", (ft_substr( s, start, len)));
        return (0);
}

The substring.
NULL if the allocation fails.
External functs. malloc
 Allocates memory (with malloc(3)) and returns a
substring from the ncstring ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len’.
*/
