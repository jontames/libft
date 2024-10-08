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

	str_len = (strlen(src)) + (strlen(dst));
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (i < (size - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (str_len);
}

/* int main()
{
	char    src[] = "amigo";
	char    dst[15] = "";

	printf("%s\n", src);
	printf("%s\n", dst);
	printf("%ld\n", ft_strlcat(dst, src, 3));
	printf("%s\n", src);
	printf("%s\n", dst);
} */
