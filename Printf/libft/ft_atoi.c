/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:50:42 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/19 14:02:27 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	string_check(const char *str, size_t i)
{
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	if ((((i > 0) && (str[i - 1] == '+')) || ((i > 0) && (str[i - 1] == '-')))
		&& (((i > 1) && (str[i - 2] == '-'))
			|| ((i > 1) && (str[i - 2] == '+'))))
		return (0);
	return (i);
}

int	ft_atoi(const char *nptr)
{
	unsigned long				buff;
	unsigned long				v;
	size_t						i;
	int							sign;

	i = 0;
	v = 0;
	buff = 0;
	sign = 1;
	i = string_check(nptr, i);
	if (i > 0 && nptr[i - 1] == '-')
		sign = -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		v *= 10;
		v += nptr[i] - '0';
		if (buff > v && sign > 0)
			return (-1);
		else if (buff > v && sign < 0)
			return (0);
		buff = v;
		nptr++;
	}
	return (sign * v);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int     main()
{
const char *test1 = "-1";
        const char *nptr1 = &test1[1];
		const char *test2 = "-12-13";
        const char *nptr2 = &test2[1];


        char str2[] = "4193 with words";
        char str3[] = "words and 987";
        char str4[] = "         +-12";
        char str5[] = "";
        char str6[] = " ";
        char str7[] = "2147483648";
        char str8[] = "  -895";
        char str9[] = "-2437453735435777247887242472435743573542";
        char str10[] = "2437453737247887242472435743573565656542";

        printf(" → %i %i\n", ft_atoi(nptr1), atoi(nptr1));
        printf(" → %i %i\n", ft_atoi(nptr2), atoi(nptr2));
        printf(" → %i %i\n", ft_atoi(str2), atoi(str2));
        printf(" → %i %i\n", ft_atoi(str3), atoi(str3));
        printf(" → %i %i\n", ft_atoi(str4), atoi(str4));
        printf(" → %i %i\n", ft_atoi(str5), atoi(str5));
        printf(" → %i %i\n", ft_atoi(str6), atoi(str6));
        printf(" → (int max)%i %i\n", ft_atoi(str7), atoi(str7));
        printf(" → %i %i\n", ft_atoi(str8), atoi(str8));
        printf(" -> (int min long) %i %i\n", ft_atoi(str9) , atoi(str9));
        printf(" -> (int max long) %i %i\n", ft_atoi(str10), atoi(str10));
return (0);
}
*/
