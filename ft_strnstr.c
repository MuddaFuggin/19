/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:58:31 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 16:40:54 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (little[0] == '\0')
		return ((char *)(&big[0]));
	while (little[i] != '\0' && big[y] != '\0')
	{
		y++;
		while (little[i] == big[y])
		{
			i++;
			y++;
			if (i == len || little[i] == '\0')
				return ((char *)(&big[y - i]));
		}
		i = 0;
	}
	if (big[y] == '\0')
		return (((char *)(&big[y])));
	return (0);
}
/*
#include <stdio.h>
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
printf("2. Ntfound + ltle > big = NULL : %s\n", (ft_strnstr(big, little2, len)));
printf("3. Retourne Big : %s\n", (ft_strnstr(big, little3, len4)));
printf("4. needle > string, NULL : %s\n", (ft_strnstr(big, little4, len)));
printf("5. Big a partir de fromage : %s\n", (ft_strnstr(big, little, len2)));
printf("6. apd francois (len++) : %s\n", (ft_strnstr(big, little, len4)));
printf("7. Not found, return NULL : %s\n", (ft_strnstr(big2, little, len3)));
return (0);
}
*/
