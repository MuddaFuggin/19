/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:16:04 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/11 18:07:27 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else
		return (c);
	return (c);
}
/*
#include <stdio.h>

int	main(int argc,char **argv)
{
	(void)argc;
	printf("%c\n", (ft_toupper(*argv[1])));
}
*/
