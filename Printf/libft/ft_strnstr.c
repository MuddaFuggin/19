/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:58:31 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/12 18:06:11 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	int				j;

	j = 0;
	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i] == little[j] && big[i] && i < len)
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

/*
RETURN VALUES
If little is an empty string, big is returned; 
if little occurs nowhere in big, NULL is returned; 
otherwise a pointer to the first character 
of the first occurrence of little is returned.
int	main()
{
 	char little[] = "francois";
 	char little2[] = "J'achete du poulet tous les jours car 
je suis a l'aise financierement.";
 	char little3[] = "";
 	char little4[] = "Eul fromage de francois le francais qui 
 vient de la France francaise.";

	char big[] = "Le fromage de francois le francais.";
 	char big2[] = "Jambon";

 	size_t len = 5;
 	size_t len2 = 1;
 	size_t len3 = 12;
 	size_t len4 = 200;

 printf("1. Big a partir de francois : %s\n", (ft_strnstr(big, little, len)));
 printf("2. Ntfound + ltle > big = NULL : %s\n", 
(ft_strnstr(big, little2, len)));
 printf("3. Retourne Big : %s\n", (ft_strnstr(big, little3, len4)));
 printf("4. needle > string, NULL : %s\n", (ft_strnstr(big, little4, len)));
 printf("5. Big a partir de fromage : %s\n", (ft_strnstr(big, little, len2)));
 printf("6. apd francois (len++) : %s\n", (ft_strnstr(big, little, len4)));
 printf("7. Not found, return NULL : %s\n", (ft_strnstr(big2, little, len3)));
	// printf("|%s|\n", ft_strnstr("abc", "xyz", 1));
return (0);
}
*/
