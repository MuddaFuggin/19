/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:56:47 by csimonne          #+#    #+#             */
/*   Updated: 2025/05/12 20:19:41 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	**set_malloc(char const *s, char c)
{
	if (!s)
		return (NULL);
	return ((char **)malloc((ft_countword(s, c) + 1) * sizeof(char *)));
}

char	**ft_split(char const *s, char c)
{
	char	**main_string;
	size_t	word_len;
	int		i;

	main_string = set_malloc(s, c);
	if (!main_string)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			main_string[i] = ft_substr(s, 0, word_len);
			if (!main_string[i++])
				return (free_all(main_string), NULL);
			s += word_len;
		}
	}
	return (main_string[i] = NULL, main_string);
}
/*
int     main(void)

{
        char s[] = "tripouille"; 
        //char s[] = "\0aa\0bbb";
        char c = 0;
        int     i = 0;

        char   **main_string = ft_split(s, c);
        //char   **main_string2 = ft_split2(s, c);
        if (!main_string)
                return (1);
        while (main_string[i])
        {
                printf ("cam = %s\n", main_string[i]);
                i++;
        }
        printf ("cam = %s\n", main_string[i]);
	free_all(main_string);
        return (0);
}
*/
