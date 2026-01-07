/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:38:36 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 16:52:39 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h> //strlen
*/
#include <stddef.h> //size_t
#include <stdlib.h> // malloc
#include "libft.h" // ft_strlen

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (0);
	if (s != NULL)
		sub = malloc (sizeof (char) * (len + 1));
	if (sub == 0)
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

int	main()
{
	char const s[] = "HelloWorld";
	char const t[] = "";
	unsigned int	start = 5;
	size_t	len = 5;

	printf("%s\n", s);
	printf("%s\n", (ft_substr( s, start, len)));
	printf("%s\n", (ft_substr( t, start, len)));
	return (0);
}
*/
