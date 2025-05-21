/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:09:56 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/06 16:24:45 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd < 0)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int	main(void)
{
	char	c[] = "Print me!";
	char	*s = c;

	ft_putstr_fd(s, 1);

	return (0);
}
*/
