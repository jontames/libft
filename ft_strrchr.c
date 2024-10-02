/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:42:30 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:42:34 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     i;
    int     pos;

    i = 0;
    pos = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            pos = i;
        i++;
    }
    if (s[i] == c)
        return ((char *)&s[i]);
    else if (pos != 0)
        return ((char *)&s[pos]);
    return NULL;
}

int main()
{
    char    a[] = "Hola alba";

    printf("%p\n", ft_strrchr(a, '\0'));
    printf("%p\n", strrchr(a, '\0'));
    printf("%p\n", &a[9]);
}
