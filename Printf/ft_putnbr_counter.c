/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_counter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:05:26 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/15 19:17:20 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_static(char c)
{
	write(1, &c, 1);
}

static size_t	*ft_putnbr_count(int n, size_t *count)
{
	long int	nu;

	nu = (long int)n;
	if (nu < 0)
	{
		write(1, "-", 1);
		nu *= -1;
		(*count)++;
	}
	if (nu > 9)
	{
		(*count)++;
		ft_putnbr_count ((nu / 10), count);
		ft_putchar_static((nu % 10) + '0');
	}
	else
	{
		(*count)++;
		ft_putchar_static((nu % 10) + '0');
	}
	return (count);
}

size_t	ft_putnbr_counter(int n)
{
	size_t	counter;

	counter = 0;
	ft_putnbr_count(n, &counter);
	return (counter);
}

/*
#include <stdio.h> // a utiliser avec la fonction ci-dessus en commentaire

int	main(void)
{
	int n;
	size_t counter;
	
	n = 123456789;
	counter = 0;
	ft_putnbr_count(n, &counter);
	printf("%li\n", counter);
	return (0);
}
*/