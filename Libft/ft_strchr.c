/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:47:40 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/14 12:40:41 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (s[i] == c)
		return ((char *)(&s[i]));
	if (c == '\0' && s[i] == '\0')
		return ((char *)(&s[i]));
	else
		return (0);
}
/*
#include <stdio.h>

int main(void)
{
    const char *texte = "Mange tes morts.";
    char caractere = 'e';

    char *resultat = ft_strchr(texte, caractere);

    if (resultat != 0)
        printf("Trouvé: %s\n", resultat);
    else
        printf("Caractère non trouvé.\n");

    return 0;
}
*/
