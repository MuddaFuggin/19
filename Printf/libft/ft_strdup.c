/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:02:05 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/12 19:30:56 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*stcopy;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s) + 1;
	stcopy = (malloc(size));
	if (stcopy == NULL)
		return (0);
	while (s[i])
	{
		stcopy[i] = s[i];
		i++;
	}
	stcopy[i] = '\0';
	return (stcopy);
}
/*
#include <stdio.h>

int	main()
{
	const char s[] = "UndeuxTroisquatreCinq.";
	printf("%s\n", (ft_strdup(s)));
return(0);
}
*/
