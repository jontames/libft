/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:44:02 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:44:04 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t      i;
    unsigned char   *s1_ptr;
    unsigned char   *s2_ptr;

    s1_ptr = (unsigned char *)s1;
    s2_ptr = (unsigned char *)s2;
    i = 0;
    if (n == 0)
        return 0;
    while ((*s1_ptr || *s2_ptr) && (i < n))
    {
        if (s1_ptr[i] != s2_ptr[i])
            return (s1_ptr[i] - s2_ptr[i]);
        i++;
    }
    return 0;
}

int main()
{
    char    a[] = "";
    char    b[] = "";
    char    c[] = "";
    char    d[] = "";

    printf("%d\n", ft_memcmp(a, b, 3));
    printf("%d\n", memcmp(c, d, 3));
}
