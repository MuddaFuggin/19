/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:08:05 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/14 12:39:59 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	while (1)
	{
		if (s[i] == c)
			return ((char *)(&s[i]));
		if (c == '\0' && s[i] == '\0')
			return ((char *)(&s[i]));
		if (i == 0)
			return (0);
		i--;
	}
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
