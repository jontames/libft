/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:42:12 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:42:13 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int     i;

    i = 0;
    while (s[i] != '\0')
        if (s[i++] == c)
            return ((char *)&s[i - 1]);
    if (s[i] == c)
        return ((char *)&s[i]);
    return NULL;
}

int main()
{
    char    a[] = "Hola alba";

    printf("%p\n", ft_strchr(a, '\0'));
    printf("%p\n", strchr(a, '\0'));
}
