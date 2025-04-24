/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:05:26 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 14:19:26 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stddef.h>
#include <ctype.h>

static char	*reverse_string(char *result)
{
	size_t	i;
	size_t	start;
	char	buff;

	i = 0;
	start = 0;
	buff = 0;
	if (!isdigit(result[0]))
	{
		i++;
		start++;
	}
	while (isdigit(result[i]))
		i++;
	while (start <= (i / 2))
	{
		buff = result[i - 1];
		result[i - 1] = result[start];
		result[start] = buff;
		start++;
		i--;
	}
	result[12] = '\0';
	return (result);
}

static char	*fill_0(char *result)
{
	size_t	i;

	i = 0;
	while (i < 12)
	{
		result[i] = '\0';
		i++;
	}
	return (result);
}

static char	*is_neg(int *n, char *result, size_t *i)
{
	result[0] = '-';
	*n *= -1;
	(*i)++;
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	result[12];
	size_t	i;

	i = 0;
	fill_0(result);
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
		write (fd, "0", 1);
	if (n < 0)
		is_neg(&n, result, &i);
	while (n > 0)
	{
		result[i++] = (n % 10) + '0';
		n = n / 10;
	}
	reverse_string(result);
	i = 0;
	while (result[i])
		write(fd, &result[i++], 1);
}
/*
int	main(void)
{
	int	n;
	int	n1;
	int	n2;
	int	n3;
	int	n4;

	int	fd;

	n = 1234;
	n1 = -4978562;
	n2 = 0;
	n3 = -2147483648;
	n4 = 2147483648;

	fd = 1;

	ft_putnbr_fd(n, fd);
	write (1, "\n", 1);
	ft_putnbr_fd(n1, fd);
	write (1, "\n", 1);
	ft_putnbr_fd(n2, fd);
	write (1, "\n", 1);
	ft_putnbr_fd(n3, fd);
	write (1, "\n", 1);
	ft_putnbr_fd(n4, fd);
	write (1, "\n", 1);
	return (0);
}
*/
