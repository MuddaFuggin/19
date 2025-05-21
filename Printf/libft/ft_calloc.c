/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:49:36 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/12 19:32:09 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < (nmemb * size))
		((unsigned char *)ptr)[i++] = 0;
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int	main()
{
	char *tableau = 0;
	size_t i = 0;
	size_t nmemb = 0;//789456189456612319;
	size_t size = 8798456156456132188;

	tableau = (ft_calloc(nmemb, size));
	while(i < (nmemb * size))
		printf("%i", tableau[i++]);
	printf("\n");
//	printf("%p\n", tableau);
	printf("%zu", SIZE_MAX * SIZE_MAX);
	return (0);
}
*/
