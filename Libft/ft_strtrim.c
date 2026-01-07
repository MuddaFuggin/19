/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:00:59 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 16:52:14 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> // for malloc
#include <stddef.h> // for size_t
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	debut;
	size_t	fin;
	char	*str;

	debut = 0;
	fin = strlen(s1) - 1;
	while (ft_strchr(set, s1[debut]))
		debut++;
	while (ft_strrchr(set, s1[fin]))
		fin--;
	if (fin >= debut)
		str = malloc(sizeof(char) * (fin - debut + 1));
	else
		return (0);
	if (!str)
		return (NULL);
	while (debut <= fin && *s1 != '\0')
		str[debut++] = s1[fin++];
	return (str);
}
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
