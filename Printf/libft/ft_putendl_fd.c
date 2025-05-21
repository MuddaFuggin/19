/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:05:26 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/06 15:37:27 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}
/*
int	main()
{
	char	c[] = "Papichullo2.";
	char	*s;
	int	fd;

	s = c;
	fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}
*/
