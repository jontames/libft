/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:58:13 by jtames            #+#    #+#             */
/*   Updated: 2024/09/12 17:58:16 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t  total_size;
    void    *ptr;

    total_size = nmemb * size;
    ptr = malloc(total_size);
    if (ptr == NULL)
        return NULL;
    ft_memset(ptr, 0, total_size);
    return ptr;
}

int main()
{
    int     num;
    int     *a;
    int     i;
    
    num = 4;
    a = ft_calloc(4, sizeof(int));
    i = 0;

    while (i < 4)
        printf("%d\n", a[i++]);

    free(a);
}
