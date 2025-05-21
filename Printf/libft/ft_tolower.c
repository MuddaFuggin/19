/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:09:48 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/30 12:47:13 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
