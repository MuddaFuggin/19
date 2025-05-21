/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:08:05 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/12 19:39:51 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	if (s[i] == '\0' && c == '\0')
		return ((char *)(&s[i]));
	len = ft_strlen(s);
	i = len;
	while (i > 0)
	{
		if ((char)c == '\0' && s[i] == '\0')
			return ((char *)(&s[i]));
		if (s[i] == (char)c)
			return ((char *)(&s[i]));
		if (i == 0)
			return (0);
		i--;
	}
	if (s[0] == (char)c)
		return ((char *)(&s[i]));
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	const char *texte = "Mange tes morts.";
	char caractere = '\0';

	char *resultat = ft_strrchr(texte, caractere);

	if (resultat != 0)
		printf("Trouvé: %s\n", resultat);
	else
		printf("Caractère non trouvé.\n");

	return 0;
}
*/
