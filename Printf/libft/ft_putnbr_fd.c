/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:05:26 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/06 16:26:03 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd ((n / 10), fd);
		ft_putchar_fd ((n % 10) + '0', fd);
	}
	else
		ft_putchar_fd ((n % 10) + '0', fd);
}
/*
int	main(void)
{
	int	n;
	int	n1;
	int	n2;
	int	n3;
	int	n4;
	int	n5;

	int	fd;

	n = 1234;
	n1 = -57;
	n2 = 0;
	n3 = -2147483648;
	n4 = 2147483648;
	n5 = 2147483647;

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
	ft_putnbr_fd(n5, fd);
	write (1, "\n", 1);
	return (0);
}
*/
