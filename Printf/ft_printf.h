/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 22:06:58 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/07 22:12:49 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stddef.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <string.h>

int			ft_printf(const char *s, ...);
size_t		ft_hexlow(unsigned int nu);
size_t		ft_hexup(unsigned int nu);
size_t		ft_hexpal(void *ptr);
size_t		ft_putnbr_counter(int n);
size_t		ft_putnbr_unsigned_fd(unsigned int nu);
size_t		ft_putstr_counter(char *s);

#endif