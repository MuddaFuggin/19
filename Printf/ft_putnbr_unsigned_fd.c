/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
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

static size_t	ft_put_n_count(unsigned int n, size_t *count)
{
	if (n > 9)
	{
		(*count)++;
		ft_put_n_count((n / 10), count);
		ft_putchar_static((n % 10) + '0');
	}
	else
	{
		(*count)++;
		ft_putchar_static((n % 10) + '0');
	}
	return (*count);
}

size_t	ft_putnbr_unsigned_fd(unsigned int nu)
{
	size_t	count;

	count = 0;
	ft_put_n_count(nu, &count);
	return (count);
}
/*
#include <stdio.h>
#include <string.h>
int    main(void)
{
	unsigned int	count;
    unsigned int n;

	n = 4294967295;
	count = 0;
    ft_put_n_count(n, &count);
    printf("%d\n", count);
		return (0);
}
*/