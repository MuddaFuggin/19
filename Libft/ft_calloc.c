/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:49:36 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/22 18:49:02 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc (nmemb * size);
	if ((nmemb * size) > 2147483647)
		return (NULL);
	if (ptr == 0)
		return (ptr);
	while (i < (nmemb * size))
		((unsigned char *)ptr)[i++] = 0;
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char *tableau = 0;
	size_t i = 0;
	size_t nmemb = 2;
	size_t size = sizeof(int);

	tableau = (ft_calloc(nmemb, size));
	while(i < (nmemb * size))
		printf("%i", tableau[i++]);
	printf("\n");
	return (0);
}
*/
