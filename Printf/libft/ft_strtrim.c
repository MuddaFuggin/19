/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:00:59 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/05 20:26:20 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	debut;
	size_t	fin;
	size_t	i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	debut = 0;
	fin = ft_strlen(s1) - 1;
	i = 0;
	while (ft_strchr(set, s1[debut]) && s1[debut] != '\0')
		debut++;
	while (ft_strchr(set, s1[fin]) && fin > debut)
		fin--;
	if (fin < debut)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (fin - debut) + 2);
	if (!str)
		return (NULL);
	while (debut <= fin)
		str[i++] = s1[debut++];
	str[i] = '\0';
	return (str);
}
/*
Parameters s1: The string to be trimmed.
set: The string containing the set of characters
to be removed.

Return The trimmed string.
NULL if the allocation fails.

Allocates memory(using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.

++++++
char *strchr(const char *s, int c);
The  strchr()  function returns a pointer to the 
first occurrence of the character c in the string s.

*/
/*
#include <stdio.h>

int     main()
{
        char const      s1[] = "ab babamy name is C	 ababba ";
        char const      set[] = "ab \t \v \n \f \r";

        printf("%s\n", ft_strtrim(s1, set));
return (0);
}
*/
