/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:24:45 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/08 18:45:11 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	y;
	char	*str;
	size_t	s1len;
	size_t	s2len;

	i = 0;
	y = 0;
	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = malloc (sizeof(char) * ((s1len) + (s2len) + 1));
	if (str == NULL)
		return (NULL);
	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (s1len + s2len))
		str[i++] = s2[y++];
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
    char const s1[] = "aaaaaaaaaaaa";
    char const s2[] = "";
    char *joined;

    joined = ft_strjoin(s1, s2);
    if (!joined)
        return (1);
    printf("%s\n", joined);
    free(joined); 
    return (0);
}
*/
