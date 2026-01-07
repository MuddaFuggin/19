/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:55:07 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/22 14:09:02 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stddef.h>

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
	size_t	i;

	i = 0;
	if (!(sign == 0))
	{
		s[i] = sign;
		i++;
	}
	while (i < count)
	{
		while (n > 9)
		{
			s[count - 1] = (n % 10) + '0';
			n = n / 10;
			count --;
		}
		if (n <= 9)
		{
			s[count - 1] = n + '0';
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
        int number = -102345;
        printf("%s\n", ft_itoa(number));
return (0);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int test_cases[] = {0, 42, -42, 2147483647, -2147483648};
	char *result;

	for (int i = 0; i < 5; i++)
	{
		result = ft_itoa(test_cases[i]);
		if (result == NULL)
			printf("Memory allocation failed for %d\n", test_cases[i]);
		else
		{
			printf("ft_itoa(%d) = %s\n", test_cases[i], result);
			free(result);  // Don't forget to free the allocated memory
		}
	}
	return 0;
}
*/
