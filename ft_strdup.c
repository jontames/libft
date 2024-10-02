/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:58:52 by jtames            #+#    #+#             */
/*   Updated: 2024/09/12 17:58:54 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t      len;
    char        *dup;

    len = ft_strlen(s);
    dup = (char *)malloc(len + 1);
    if (dup == NULL)
        return NULL;
    ft_memcpy(dup, s, ft_strlen(s));
    dup[ft_strlen(s)] = '\0';
    return dup;
}

int main()
{
    const char  *original = "";
    char        *copy;

    copy = ft_strdup(original);
    if (copy == NULL) {
        printf("Error al reservar memoria\n");
        return 1;
    }

    printf("Copia: %s\n", copy);

    free(copy);
    return 0;
}
