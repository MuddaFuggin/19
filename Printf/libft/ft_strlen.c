/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:50:26 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/20 17:25:04 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	if (!s)
		return (0);
	while (*s++ != '\0')
		count++;
	return (count);
}
/*
#include <stdio.h>
int	main()
{
	size_t	count;
	char	*s;
	s = "";
	count = ft_strlen(s);
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
	printf("%ld\n", count);
return (0);
}
*/
