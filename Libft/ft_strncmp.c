/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:55:56 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 16:48:20 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
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
