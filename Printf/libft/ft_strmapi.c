/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:20:18 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/06 17:48:37 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*nu_string;
	size_t				i;
	unsigned long		len ;

	if (!f || !s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	nu_string = malloc(sizeof(char) * (len + 1));
	if (nu_string == 0)
		return (nu_string);
	nu_string[len] = '\0';
	while (i < len)
	{
		nu_string[i] = (*f)(i, s[i]);
		i++;
	}
	nu_string[i] = '\0';
	return (nu_string);
}
/*
#include <stdio.h>
#include <ctype.h>

char toupper_adapter(unsigned int i, char c)
{
    (void)i;  
    return (char)toupper((unsigned char)c);
}

int main()
{
    char str[] = "hello world!";
    char *result = ft_strmapi(str, toupper_adapter);
    if (result == NULL) 
    {
        printf("Échec de l'allocation mémoire\n");
        return 1;
    }
    printf("Original: %s\n", str);
    printf("Transformé: %s\n", result);
    free(result);
    return 0;
}
*/
