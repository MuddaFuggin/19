/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:09:48 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/11 18:15:06 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	else
		return (c);
	return (c);
}
/*
#include <stdio.h>

int	main(int argc,char **argv)
{
	(void)argc;
	printf("%c\n", (ft_tolower(*argv[1])));
}
*/
