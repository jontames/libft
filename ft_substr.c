/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtames <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:43:41 by jtames            #+#    #+#             */
/*   Updated: 2024/10/02 19:43:49 by jtames           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	rest;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	rest = ft_strlen(s) - start;
	if (len >= rest)
		len = rest;
	sub_s = malloc(len + 1);
	if (sub_s == NULL)
		return (NULL);
	i = 0;
	while ((i < len) && (s[start] != '\0'))
		sub_s[i++] = s[start++];
	sub_s[i] = '\0';
	return (sub_s);
}

/* int	main()
{
	char	*str = strdup("0123456789");
	char	*s = ft_substr(str, 9, 10);
	size_t	b;

	b = ft_strlen(s) + 1;
	printf("%zu\n", b);
	printf("%s\n", s);
	free(str);
	free(s);
} */
