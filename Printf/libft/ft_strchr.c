/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 09:47:40 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/12 18:01:00 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != (char)c && s[i])
		i++;
	if (s[i] == (char)c)
		return ((char *)(&s[i]));
	if ((char)c == '\0' && s[i] == '\0')
		return ((char *)(&s[i]));
	else
		return (0);
}
/*
The  strchr()  function returns a pointer to the first occurrence of 
the character c in the string s.
The  strchr() and strrchr() functions return a pointer 
to the matched character or NULL if the character is not found.  
The terminating null byte is  considered  part  
of  the string, so that if c is specified as '\0', these functions return 
a pointer to the terminator.

int main(void)
{
    const char *texte = "teste";
    char caractere = 'e';

    char *resultat = ft_strchr(texte, caractere);

    if (resultat != 0)
        printf("Trouvé: %s\n", resultat);
    else
        printf("Caractère non trouvé.\n");

    return 0;
}
*/
