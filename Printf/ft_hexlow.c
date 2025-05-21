/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:18:09 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/14 22:51:27 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_static(char c)
{
	write(1, &c, 1);
}

static unsigned int	hexalpha(unsigned int x)
{
	if (x < 10)
		x += '0';
	else if (x >= 10)
		x += 'a' - 10;
	return (x);
}

static size_t	*ft_putnbr_count(unsigned int n, size_t *count)
{
	unsigned int	x;
	unsigned int	result;

	x = n % 16;
	n = n - x;
	n = n / 16;
	result = hexalpha(x);
	if (n > 0)
	{
		(*count)++;
		ft_putnbr_count(n, count);
		ft_putchar_static(result);
	}
	if (n == 0)
	{
		(*count)++;
		ft_putchar_static(result);
	}
	return (count);
}

static void	ft_putdecimal(unsigned int n)
{
	if (n == 0)
		write (1, "0", 1);
	else if (n > 0 && n < 10)
	{
		n += '0';
		write(1, &n, 1);
	}
}

size_t	ft_hexlow(unsigned int nu)
{
	size_t	counter;

	counter = 0;
	if (nu < 10)
	{
		ft_putdecimal(nu);
		counter = 1;
	}
	else
		ft_putnbr_count(nu, &counter);
	return (counter);
}
/*
#include <stdio.h> // a utiliser avec la fonction ci-dessus en commentaire

int	main(void)
{
	int n;
	size_t counter;

	counter = 0;	
	n = 1554519831;
	if (n < 10)
	{
		ft_putdecimal(n);
		counter = 1;
	}
	else
		ft_putnbr_count(n, &counter);
	printf("%zu\n", counter);
	return (0);
}
*/