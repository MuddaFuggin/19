/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:53:49 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/21 19:53:53 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> /* for size_t */
#include <stdlib.h> /* for malloc */
#include <stdio.h>

static void	check_malloc(void *main_string)
{
	if (main_string == NULL)
	{
		free(main_string);
		exit(1);
	}
}

static int	count_word(char const	*s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			count ++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static size_t	stringlen(char const *s, char c, size_t *i)
{
	size_t	len;
	size_t	x;

	len = 0;
	x = *i;
	while (s[x] != c && s[x])
	{
		(*i)++;
		x++;
		len ++;
	}
	return (len);
}

static char	*ft_strcpy2(char *dst, const char *src, size_t size, size_t i)
{
	size_t	x;
	size_t	y;

	x = i - size;
	y = 0;
	while (y < size)
	{
		dst[y++] = src[x++];
	}
	dst[y] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	static int	count;
	char		**main_string;
	size_t		len;
	size_t		i;
	size_t		n;

	i = 0;
	n = 0;
	count = count_word(s, c);
	main_string = malloc(sizeof(char *) * (count + 1));
	check_malloc(main_string);
	main_string[count] = '\0';
	while (s[i++])
	{
		while (s[i] != c && s[i])
		{
			len = stringlen(s, c, &i);
			main_string[n] = malloc(sizeof(char) * len + 1);
			check_malloc(main_string[n]);
			main_string[n] = ft_strcpy2(main_string[n], s, len, i);
			n++;
		}
	}
	return (main_string);
}
/*
int     main(void)
{
        char s[] = "cc1c23456c7ccccc89cc10c";
        char c = 'c';
        int     i = 0;

        char    **main_string = ft_split(s, c);
        if (!main_string)
                return (1);
        while (main_string[i])
        {
                printf ("%s\n", main_string[i]);
                i++;
        }
        return (0);
}
*/
