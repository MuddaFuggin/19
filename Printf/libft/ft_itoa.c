/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:55:07 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/08 17:04:01 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_num(int *n, char *sign)
{
	int	count;
	int	temp;

	count = 0;
	if (*n < 0)
	{
		*n *= -1;
		*sign = '-';
		count ++;
	}
	temp = *n;
	while (temp > 9)
	{
		temp = temp / 10;
		count ++;
	}
	count ++;
	return (count);
}

static char	*fill_str(int n, char *s, char sign, size_t count)
{
	long long int		nb;
	size_t				i;

	i = 0;
	nb = n;
	if (!(sign == 0))
	{
		s[i] = sign;
		i++;
	}
	while (i < count)
	{
		while (nb > 9)
		{
			s[count - 1] = (nb % 10) + '0';
			nb = nb / 10;
			count --;
		}
		if (nb <= 9)
		{
			s[count - 1] = nb + '0';
			return (s);
		}
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	sign;
	char	*s;
	size_t	count;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = count_num(&n, &sign);
	s = malloc(sizeof(char) * (count + 1));
	if (!s)
		return (NULL);
	s[count] = '\0';
	fill_str(n, s, sign, count);
	return (s);
}
/*
#include <stdio.h>

int     main(void)
{
        int number = -2147483648LL;
        printf("%s\n", ft_itoa(number));
return (0);
}
*/
