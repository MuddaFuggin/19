/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:33:08 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 16:21:16 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
c: The character to output.
fd: The file descriptor on which to write.
*/
#include <unistd.h>
	
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char	*c = "Print me!";
	while (*c)
	{
		ft_putchar_fd(*c++, 1);
	}
	return (0);
}
*/
