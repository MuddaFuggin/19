/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:55:56 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/02 20:52:42 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	size_t result = 0;
	int i = 0;

	while (argv[3][i] >= '0' && argv[3][i] <= '9') 
	{
		result = result * 10 + (argv[3][i] - '0');
		i++;
	}
	int resultat = (ft_strncmp(argv[1], argv[2], result));
	printf("%i\n", resultat);
return(0);
}
*/
