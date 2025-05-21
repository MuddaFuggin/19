/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csimonne <csimonne@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:24:44 by csimonne          #+#    #+#             */
/*   Updated: 2025/04/24 13:54:08 by csimonne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = s;
	i = 0;
	while (i < n)
		ptr[i++] = '\0';
}
/*
#include <stdio.h>

int main()
{
    char arr[5] = {1, 2, 3, 4, 5};  // Tableau de 5 `char`

    // Avant bzero
    printf("Avant bzero:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Appel de bzero pour initialiser tous les éléments du tableau à 0
    ft_bzero(arr, sizeof(arr));  // Taille du tableau en octets

    // Après bzero
    printf("Après bzero:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/
