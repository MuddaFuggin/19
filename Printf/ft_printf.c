/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 22:15:13 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/08 13:14:03 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	deal_args(const char *s, va_list *args, size_t count)
{
	if (*s == 'c')
	{
		ft_putchar_fd((va_arg(*args, int)), 1);
		count++;
	}
	else if (*s == 's')
		count += ft_putstr_counter(va_arg(*args, char *));
	else if (*s == 'p')
		count += ft_hexpal(va_arg(*args, void *));
	else if (*s == 'd' || *s == 'i')
		count += ft_putnbr_counter(va_arg(*args, int));
	else if (*s == 'u')
		count += ft_putnbr_unsigned_fd(va_arg(*args, unsigned int));
	else if (*s == 'x')
		count += ft_hexlow(va_arg(*args, unsigned int));
	else if (*s == 'X')
		count += ft_hexup(va_arg(*args, unsigned int));
	else if (*s == '%')
	{
		ft_putchar_fd('%', 1);
		count ++;
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	size_t	count;
	va_list	args;

	va_start(args, s);
	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			count = deal_args(s, &args, count);
			s++;
		}
		while (*s && *s != '%')
		{
			write(1, s++, 1);
			count++;
		}
	}
	va_end (args);
	return (count);
}
