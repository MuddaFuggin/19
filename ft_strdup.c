/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:02:05 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/16 19:58:29 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <libft.h> //pour mon malloc et strlen
*/
#include <stdlib.h> //pour malloc officiel
#include <string.h> // pour strlen officiel
#include <errno.h>

char	*ft_strdup(const char *s)
{
	char	*stcopy;
	size_t	size;
	size_t	i;

	i = 0;
	size = strlen(s) + 1;
	stcopy = (malloc(size));
	if (stcopy == NULL)
	{
		errno = ENOMEM;
		return (0);
	}
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
