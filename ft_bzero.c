/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:39:38 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:39:40 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t     i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
        ptr[i++] = '\0';
}

int main()
{
    char    a[] = "Hola amigos";
    char    b[] = "Hola mi gente";

    printf("%s\n", a);
    ft_bzero(a, 4);
    printf("%c\n", a[2]);
    printf("%s\n", b);
    bzero(b, 4);
    printf("%c\n", b[2]);
}
