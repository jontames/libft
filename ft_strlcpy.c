/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:40:39 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:40:40 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while ((src[i] != '\0') && (i < (size - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* int main()
{
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);

	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%ld\n", ft_strlcpy(dest, src, 0));
	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%c\n", dest[0]);
} */