/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:18:09 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/14 22:51:27 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*swap_result_add_xo(char	*result)
{
	char	temp;
	size_t	i;
	size_t	y;

	result[ft_strlen(result)] = 'x';
	result[ft_strlen(result)] = '0';
	y = strlen(result) - 1;
	i = 0;
	while (i <= ((ft_strlen(result) - 1) / 2))
	{
		temp = result[i];
		result[i] = result[y];
		result[y] = temp;
		i++;
		y--;
	}
	return (result);
}

static uintptr_t	hexalpha(uintptr_t	x)
{
	if (x < 10)
		x += '0';
	else if (x >= 10)
		x += 'a' - 10;
	return (x);
}

static char	*ft_hexcon(uintptr_t n, char *result, size_t counter)
{
	uintptr_t	x;

	if (!n || !result)
		return (0);
	x = n % 16;
	n = n - x;
	n = n / 16;
	x = hexalpha(x);
	if (n > 0)
	{
		result[counter] = x;
		(ft_hexcon(n, result, counter + 1));
	}
	if (n == 0)
	{
		result[counter] = x;
		(ft_hexcon(n, result, counter + 1));
	}
	if (counter == 0)
	{
		swap_result_add_xo(result);
		result[ft_strlen(result)] = '\0';
	}
	return (result);
}

size_t	ft_hexpal(void *ptr)
{
	uintptr_t	n;
	size_t		i;
	char		result[32];
	size_t		counter;

	counter = 0;
	i = 0;
	ft_bzero(result, sizeof(result));
	n = (uintptr_t)ptr;
	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ft_hexcon(n, result, counter);
	while (result[i])
	{
		write(1, &result[i], 1);
		i++;
	}
	return (i);
}
/*
//fonctionne uniquement avec la fonction hexpal desactivee
#include <stdio.h>

int main(void)
{
    void *ptr;
    int     i;
    uintptr_t  n;

    i = 9;
    ptr = &i;
    n = (uintptr_t)ptr;
    char    result[32] = {0};
	(void)result;
	(void)n;

    //uintptr_t  n = 25065108410651056160513;
    size_t  counter = 0;
	(void)counter;
    printf("adresse convertie.. : %s\n", ft_hexcon(n, result, counter));
    printf("adresse du pointeur : %p\n", ptr);
    return (0);
} 
*/