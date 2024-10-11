/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:41:00 by jtames            #+#    #+#             */
/*   Updated: 2024/09/20 16:41:01 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		str_len;

	str_len = (ft_strlen(src)) + (ft_strlen(dst));
	if (size > ft_strlen(dst))
	{
		i = ft_strlen(dst);
		j = 0;
		while (src[j] && i < (size - 1))
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (str_len);
	}
	return (size + ft_strlen(src));
}

/* int main()
{
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';

	memset(dest, 'C', 5);

	printf("%s\n", src);
	printf("%s\n", dest);
	printf("%ld\n", ft_strlcat(dest, src, -1));
	printf("%ld\n", ft_strlen(src));
	printf("%s\n", src);
	printf("%s\n\n", dest);

	printf("%d\n", strcmp(dest, "B"));
	if (!strcmp(dest, "B"))
		printf("1\n");
	else
		printf("2\n");
} */
