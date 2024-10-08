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
	char    src[] = "\t";
	char    dst[3];

	printf("%s\n", src);
	printf("%s\n", dst);
	printf("%ld\n", ft_strlcpy(dst, src, 3));
	printf("%s\n", src);
	printf("%s\n", dst);
} */